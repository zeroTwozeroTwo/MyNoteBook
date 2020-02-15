package stack;


import java.util.Scanner;

public class LinkedListStackDemo {
    public static void main(String[] args) {
        LinkedListStack stack = new LinkedListStack();
        Scanner scanner = new Scanner(System.in);
        String key = "";
        boolean loop = true;
        while (loop) {
            System.out.println();
            System.out.println("show:表示显示栈");
            System.out.println("push:入栈");
            System.out.println("exit:退出");
            System.out.println("pop:出栈");
            key = scanner.next();
            switch (key) {
                case "show":
                    stack.list();
                    break;
                case "push":
                    System.out.println("请输入一个数");
                    int value = scanner.nextInt();
                    stack.push(value);
                    break;
                case "pop":
                    try{
                        int result = stack.pop();
                        System.out.println(result);
                    }catch (Exception e) {
                        e.printStackTrace();
                    }
                    break;
                case "exit":
                    scanner.close();
                    loop = false;
                    break;
                default:
                    break;
            }
        }
        System.out.println("程序退出了~~~");
    }
}

class LinkedListStack {
    private StackNode head = new StackNode(0);


    //判断空
    private boolean isEmpty() {
        return head.getNext() == null;
    }

    //push
    public void push(int value) {
        //将新插入的节点放在最前面
        StackNode stackNode = new StackNode(value);
        stackNode.setNext(head.getNext());
        head.setNext(stackNode);
    }

    public int pop() {
        //判断链表是否为空
        if (isEmpty()) {
            throw new RuntimeException("栈为空,不能取出");
        }
        //将取出的数据存放起来
        int value = head.getNext().getNo();
        head.setNext(head.getNext().getNext());
        return value;
    }

    //遍历
    public void list() {
        if (isEmpty()) {
            System.out.println("栈为空,不能遍历~~~~~");
            return;
        }
        StackNode curStack = head;
        while (true) {
            if (curStack.getNext() == null) {
                break;
            }
            if (curStack.getNext() == head.getNext())
            {
                System.out.print(curStack.getNext().getNo());
            } else {
                System.out.print( "->" + curStack.getNext().getNo());
            }
            curStack = curStack.getNext();
        }
    }
}

class StackNode {
    private int no;
    private StackNode next;

    public StackNode(int no) {
        this.no = no;
    }

    public int getNo() {
        return no;
    }

    public void setNo(int no) {
        this.no = no;
    }

    public StackNode getNext() {
        return next;
    }

    public void setNext(StackNode next) {
        this.next = next;
    }
}