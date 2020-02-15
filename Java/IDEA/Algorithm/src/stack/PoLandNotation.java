package stack;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;

public class PoLandNotation {
    public static void main(String[] args) {
        //完成将一个中缀表达式转成后缀表达式的功能
        //说明
        //1. 1+((2+3)x4)-5 ==> 转成1 2 3 + 4 x + 5 -
        //2.因为直接对字符串进行操作.不方便.因此先将 "1+((2+3)x4)-5" ==> 中缀表达式对应的List
        //即1+((2+3)x4)-5 ==> ArrayList [1,(,)....
        //将得到的中缀表达式转化成对应的后缀表达式 [1, +, (, (, 2, +, 3, ), x, 4, ), -, 5]
        String expression = "12x(3+8x(5-2)x(3x4)-3)+99"; //[1, +, (, (, 2, +, 3, ), x, 4, ), -, 5] 12 3 8 5 2 - x 3 4 x x + 3 - x 99 +
        List<String> infixExpressionList = toInfixExpressionList(expression);
        System.out.println("中缀表达式对应的List" + infixExpressionList);
        List<String> parseSuffixExpression = parseSuffixExpressionList(infixExpressionList);
        System.out.println("后缀表达式对应的List:" + parseSuffixExpression);
        int result = calculate(parseSuffixExpression);
        System.out.println("逆波兰表达式的结果:" + expression + "=" + result);

//        //先定义一个逆波兰表达式
//        //(3+4) x 5 - 6
//        // 4 * 5 - 8 + 60 + 8 / 2 ----> 4 5 * 8 - 60 + 8 2 / +
//        //测试(3+4) x 5 - 6 ---> 30 4 + 5 x 6 -
//        //说明:为了方便,逆波兰表达式的数字和符号使用空格隔开
//        String suffixExpression = "4 5 x 8 - 60 + 8 2 / +";
//        //思路
//        //1.先将suffixExpression 放到ArrayList中
//        //2.将ArrayList 传给一个方法,遍历ArrayList 配合栈完成计算
//
//        List<String> list = getListString(suffixExpression);
//        System.out.println(list);
//
//        int result = calculate(list);
//
//        System.out.println("结算的结果是:" + result);
    }

    //将一个逆波兰表达式,依次将数据和运算符放入ArrayList中
    public static List<String> getListString(String suffixExpression) {
        //将suffixExpression分割
        String[] split = suffixExpression.split(" ");
        List<String> list = new ArrayList<>();
        for (String str : split) {
            list.add(str);
        }
        return list;
    }

    //方法:将对应的中缀表达式转化为后缀表达式
    public static List<String> parseSuffixExpressionList(List<String> expression) {
        //定义两个栈
        Stack<String> operatorStack = new Stack<>();//符号栈
        //说明:中间结果栈,在整个转化的过程中没有,pop的操作,而且后面还要逆序输出
        //因此可以直接用List集合代替
//        Stack<String> numberStack = new Stack<>();//存储中间结果的栈
        List<String> resultStack = new ArrayList<>();

        //遍历表达式
        for (String item : expression) {
            //如果是一个数就入结果栈
            if (item.matches("\\d+")) {
                resultStack.add(item);
            } else if (item.equals("(")) {
                operatorStack.push(item);
            } else if (item.equals(")")) {
                //如果是右括号")",则依次弹出operator栈顶的运算符,并压入result结果栈中,直到左括号为止,此时将这一对括号丢弃
                while (!operatorStack.peek().equals("(")) {
                    resultStack.add(operatorStack.pop());
                }
                operatorStack.pop();//!!!!!!!!!一定要将 ( 弹出operator栈 消除小括号
            } else {
                //当item的优先级小于或等于operator栈顶运算符,将operator栈顶的运算符弹出并加入到result结果栈中
                while (operatorStack.size() != 0 && Operation.getValue(operatorStack.peek()) >= Operation.getValue(item)) {
                    resultStack.add(operatorStack.pop());
                }
                //把当前的运算符压入operator栈中
                operatorStack.push(item);
            }
        }
        //将operator中的运算符一次弹出并加入result结果栈中
        while (operatorStack.size() != 0) {
            resultStack.add(operatorStack.pop());
        }

        return resultStack;//因为是存放到List,因此按顺序输出后就是对应的逆波兰表达式
    }


    //方法:将中缀表达式转成对应的List
    public static List<String> toInfixExpressionList(String expression) {
        //定义一个List,存放中缀表达式对应的List
        List<String> list = new ArrayList<>();
        int i = 0;//相当于一个指针,用于遍历 中缀表达式字符串
        String str;//对多位数的拼接
        char c;//每遍历一个字符就放入c中
        do {
            //如果c是一个非数字,
            if ((c = expression.charAt(i)) < 48 || (c = expression.charAt(i)) > 57) {
                list.add("" + c);
                i++;
            } else { //如果是数字 要考虑多位数的问题
                str = "";//先将str 置空
                while (i < expression.length() && (c = expression.charAt(i)) >= 48 && (c = expression.charAt(i)) <= 57) {
                    str += c;//拼接
                    i++;
                }
                list.add(str);
            }
        } while (i < expression.length());
        return list;
    }

    //完成对逆波兰表达式的运算
    //从左至右扫描
    public static int calculate(List<String> list) {
        //创建栈,值需要一个栈
        Stack<String> stack = new Stack<>();
        int result = 0;
        //遍历list
        for (String item : list) {
            //这里使用正则表达式来取出数
            if (item.matches("\\d+")) {//匹配的是多位数
                //入栈
                stack.push(item);
            } else {
                //pop出两个数并运算
                int num2 = Integer.parseInt(stack.pop());
                int num1 = Integer.parseInt(stack.pop());
                if (item.equals("+")) {
                    result = num1 + num2;
                } else if (item.equals("-")) {
                    result = num1 - num2;
                } else if (item.equals("x")) {
                    result = num1 * num2;
                } else if (item.equals("/")) {
                    result = num1 / num2;
                } else {
                    throw new RuntimeException("运算符有误");
                }
                //把result入栈
                stack.push(String.valueOf(result));
            }
        }
        //最后留在stack中的数据是运算结果
        return Integer.parseInt(stack.pop());
    }
}

//编写一个类 Operation 可以返回一个运算符 对应的优先级
class Operation {
    private static int ADD = 1;
    private static int SUB = 1;
    private static int MUL = 2;
    private static int DIV = 2;

    //写个方法,返回对应的优先级数字
    public static int getValue(String operator) {
        int result = 0;
        switch (operator) {
            case "+":
                result = ADD;
                break;
            case "-":
                result = SUB;
                break;
            case "x":
                result = MUL;
                break;
            case "/":
                result = DIV;
                break;
        }
        return result;
    }
}
