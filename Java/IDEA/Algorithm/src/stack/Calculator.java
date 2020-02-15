package stack;

import javafx.beans.value.ObservableValue;

public class Calculator {
    public static void main(String[] args) {
        String expression = "8*4*60/8*6-6";
        String expressionReplace = expression;
        //创建两个栈,一个是数栈,一个是符号栈.
        CalculatorStack numStack = new CalculatorStack(10);
        CalculatorStack operStack = new CalculatorStack(10);
        int index = 0;//用于扫描
        int num1 = 0;
        int num2 = 0;
        int oper = 0;
        int result = 0;
        String keepNum = "";//用于拼接多位数
        String brackets = "";//用来处理带括号的表达式
        int res = 0;//用来存放括号处理后得到值
        char ch = ' ';//将每次扫描到的的char保存到ch中
        if (expression.contains("(") && expression.contains(")")) {
            while (true) {
                if (expression.contains("(") && expression.contains(")")) {
                    brackets = expression.substring(expression.indexOf("(") + 1,expression.indexOf(")"));
                    res = Calculation(brackets);
                    brackets = "(" + brackets + ")";
                    expression = expression.replace(brackets, String.valueOf(res));
                }else {
                    break;
                }
            }
        }
        while (true) {
            //依次得到expression 的每一个字符
            ch = expression.substring(index, index + 1).charAt(0);
            //判断ch是什么,然后做相应的处理
            if (operStack.isOper(ch)) {//如果是运算符
                //判断当前符号栈是否为空
                if (!operStack.isEmpty()) {
                    //如果符号栈有操作符,就进行比较,如果当前的操作符优先级小于或等于栈中的操作符
                    //在符号栈中pop出一个符号,进行运算,将得到的结果,入数栈,然后将当前的操作符入符号栈
                    if (operStack.priority(ch) <= operStack.priority(operStack.peek())) {
                        num1 = numStack.pop();
                        num2 = numStack.pop();
                        oper = operStack.pop();
                        result = numStack.cal(num1, num2, oper);
                        //把运算的结果入数栈
                        numStack.push(result);
                        //然后把当前的操作符入符号栈
                        operStack.push(ch);
                    } else {
                        //如果当前的操作符优先级大于栈中的操作符,就直接入符号栈
                        operStack.push(ch);
                    }
                } else {
                    //如果为空直接入栈
                    operStack.push(ch);
                }
            } else { //如果是数,就直接入数栈
//                numStack.push(ch - 48);
                //分析思路
                //1.当处理多位数时,不能发现是一个数就立即入栈,因为他可能是多位数
                //2.在处理数,需要向expression的表达式后再看一位,如果是数就进行扫描,如果是符号才入栈
                //3.因此我们需要定义一个变量,字符串,用于拼接

                //处理多位数
                keepNum += ch;
                //如果ch已经是expression的最后一位,就直接入栈
                if (index == expression.length() - 1) {
                    numStack.push(Integer.parseInt(keepNum));
                } else {
                    //判断下一个字符是不是数字,如果是数字就继续扫描,如果是运算符,则入栈
                    if (operStack.isOper(expression.substring(index + 1, index + 2).charAt(0))) {
                        //如果后一位是运算符,则入栈
                        numStack.push(Integer.parseInt(keepNum));
                        keepNum = "";
                    }
                }
            }
            //让index + 1,并判断是否扫描到expression最后
            index++;
            if (index >= expression.length()) {
                break;
            }
        }
        //当表达式扫描完毕,就顺序的从数栈 和符号栈中pop出相应的数和符号,并运算
        while (true) {
            //如果符号栈为空则计算结束,那么数栈中就只有一个结果了
            if (operStack.isEmpty()) {
                break;
            }
            num1 = numStack.pop();
            num2 = numStack.pop();
            oper = operStack.pop();
            result = numStack.cal(num1, num2, oper);
            numStack.push(result);
        }
        //将数栈最后的数pop出来就是最后的结果
        System.out.printf("表达式%s=%d", expressionReplace, numStack.pop());
    }

    public static int  Calculation(String expression) {
        CalculatorStack numStack = new CalculatorStack(10);
        CalculatorStack operStack = new CalculatorStack(10);
        int index = 0;//用于扫描
        int num1 = 0;
        int num2 = 0;
        int oper = 0;
        int result = 0;
        String keepNum = "";//用于拼接多位数
        char ch = ' ';//将每次扫描到的的char保存到ch中
        while (true) {
            //依次得到expression 的每一个字符
            ch = expression.substring(index, index + 1).charAt(0);
            //判断ch是什么,然后做相应的处理
            if (operStack.isOper(ch)) {//如果是运算符
                //判断当前符号栈是否为空
                if (!operStack.isEmpty()) {
                    //如果符号栈有操作符,就进行比较,如果当前的操作符优先级小于或等于栈中的操作符
                    //在符号栈中pop出一个符号,进行运算,将得到的结果,入数栈,然后将当前的操作符入符号栈
                    if (operStack.priority(ch) <= operStack.priority(operStack.peek())) {
                        num1 = numStack.pop();
                        num2 = numStack.pop();
                        oper = operStack.pop();
                        result = numStack.cal(num1, num2, oper);
                        //把运算的结果入数栈
                        numStack.push(result);
                        //然后把当前的操作符入符号栈
                        operStack.push(ch);
                    } else {
                        //如果当前的操作符优先级大于栈中的操作符,就直接入符号栈
                        operStack.push(ch);
                    }
                } else {
                    //如果为空直接入栈
                    operStack.push(ch);
                }
            } else { //如果是数,就直接入数栈
//                numStack.push(ch - 48);
                //分析思路
                //1.当处理多位数时,不能发现是一个数就立即入栈,因为他可能是多位数
                //2.在处理数,需要向expression的表达式后再看一位,如果是数就进行扫描,如果是符号才入栈
                //3.因此我们需要定义一个变量,字符串,用于拼接

                //处理多位数
                keepNum += ch;
                //如果ch已经是expression的最后一位,就直接入栈
                if (index == expression.length() - 1) {
                    numStack.push(Integer.parseInt(keepNum));
                } else {
                    //判断下一个字符是不是数字,如果是数字就继续扫描,如果是运算符,则入栈
                    if (operStack.isOper(expression.substring(index + 1, index + 2).charAt(0))) {
                        //如果后一位是运算符,则入栈
                        numStack.push(Integer.parseInt(keepNum));
                        keepNum = "";
                    }
                }
            }
            //让index + 1,并判断是否扫描到expression最后
            index++;
            if (index >= expression.length()) {
                break;
            }
        }
        //当表达式扫描完毕,就顺序的从数栈 和符号栈中pop出相应的数和符号,并运算
        while (true) {
            //如果符号栈为空则计算结束,那么数栈中就只有一个结果了
            if (operStack.isEmpty()) {
                break;
            }
            num1 = numStack.pop();
            num2 = numStack.pop();
            oper = operStack.pop();
            result = numStack.cal(num1, num2, oper);
            numStack.push(result);
        }
        return numStack.pop();
    }
}


//表示栈结构
class CalculatorStack {
    private int maxSize;//栈的大小
    private int[] stack;//数组,数组模拟栈,数据就放在改数组
    private int top = -1;

    public CalculatorStack(int maxSize) {
        this.maxSize = maxSize;
        stack = new int[maxSize];
    }

    //栈满
    public boolean isFull() {
        return top == maxSize - 1;
    }

    //栈空
    public boolean isEmpty() {
        return top == -1;
    }

    //入栈-push
    public void push(int value) {
        //先判断栈是否满
        if (isFull()) {
            System.out.println("栈满无法加入~~~");
            return;
        }
        top++;
        stack[top] = value;
    }

    //增加一个方法,可以返回当前栈顶的值,但是不是出栈
    public int peek() {
        return stack[top];
    }

    //出栈-pop,将栈顶数据返回
    public int pop() {
        //先判断栈是否为空
        if (isEmpty()) {
            //抛出异常
            throw new RuntimeException("栈空,没有数据~~~~");
        }
        int value = stack[top--];
        return value;
    }

    //显示栈的情况,遍历栈,遍历时需要从栈顶开始显示数据
    public void list() {
        if (isEmpty()) {
            System.out.println("栈空,没有数据");
            return;
        }
        for (int i = top; i >= 0; i--) {
            System.out.printf("stack[%d]=%d\n", i, stack[i]);
        }
    }

    //返回运算符的优先级,优先级是自己来确定的,优先级使用数字表示
    //数字越大,优先级就越高
    public int priority(int oper) {
        if (oper == '*' || oper == '/') {
            return 1;
        } else if (oper == '+' || oper == '-') {
            return 0;
        } else if (oper == '(' || oper == ')') {
            return 3;
        } else {
            return -1; //假定目前的表达式只有+,-,*,/
        }

    }

    //判断是不是一个运算符
    public boolean isOper(char value) {
        return value == '+' || value == '-' || value == '*' || value == '/' || value == '(' || value == ')';
    }

    //计算方法
    public int cal(int num1, int num2, int oper) {
        int result = 0;//用于存放计算的结果
        switch (oper) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num2 - num1;//顺序问题
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num2 / num1;
                break;
        }
        return result;
    }
}