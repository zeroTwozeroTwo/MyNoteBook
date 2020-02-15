package queue;

import java.util.Scanner;

public class CircleArrayQueue {
    public static void main(String[] args) {
        CircleArray circleArray = new CircleArray(5);//其队列有效数据最大为4
        char key = ' ';
        Scanner scanner = new Scanner(System.in);
        boolean loop = true;
        while (loop) {
            System.out.println("s(show):显示队列");
            System.out.println("e(exit):退出队列");
            System.out.println("a(add):添加数据到队列");
            System.out.println("g(get):从队列取出数据");
            System.out.println("h(head):查看队列头的数据");
            key = scanner.next().charAt(0);
            switch (key) {
                case 's':
                    circleArray.show();
                    break;
                case 'e':
                    scanner.close();
                    loop = false;
                    break;
                case 'a':
                    System.out.println("输入一个数");
                    int value = scanner.nextInt();
                    circleArray.addQueue(value);
                    break;
                case 'g'://取出数据
                    try {
                        int result = circleArray.getQueue();
                        System.out.println("取出的数据是:" + result);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                    break;
                case 'h'://查看队列头的数据
                    try {
                        int result = circleArray.headQueue();
                        System.out.println("队列头数据是:" + result);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                    break;
            }
        }
        System.out.println("程序退出~~~~~~~");
    }
}

class CircleArray {
    private int maxSize;//表示数组最大容量
    //front 变量的含义做一个调整:front 指向队列的第一个元素
    //front 初始值为0
    private int front;//队列头
    //rear 变量含义做一个调整:rear 指向队列最后一个元素的后一个位置
    //rear 初始值为0
    private int rear;//队列尾
    private int[] arr;//改数据用于存放数据,模拟队列

    public CircleArray(int arrMaxSize) {
        maxSize = arrMaxSize;
        arr = new int[maxSize];
    }

    public boolean isFull() {
        return (rear + 1) % maxSize == front;
    }

    public boolean isEmpty() {
        return rear == front;
    }

    //添加数据到队列
    public void addQueue(int n) {
        //判断队列是否满
        if (isFull()) {
            System.out.println("队列满,不能加入数据");
            return;
        }
        //直接将数据加入
        arr[rear] = n;
        //将rear后移,这里必须考虑取模
        rear = (rear + 1) % maxSize;
    }

    //获取队列的数据,出队列
    public int getQueue() {
        //判断队列是否为空
        if (isEmpty()) {
            //通过抛出异常
            throw new RuntimeException("队列空,不能取数据");
        }
        //这里需要分析出front是指向队列的第一个元素
        //1.先把front 对应的值保存到一个临时变量
        //2.将front 后移
        //3.将临时保存的变量返回
        int value = arr[front];
        //考虑取模 否则可能出现数组越界
        front = (front + 1) % maxSize;

        return value;
    }

    //显示队列的所有数据
    public void show() {
        //遍历
        if (isEmpty()) {
            System.out.println("队列为空,不能遍历");
        }
        //思路: 从front开始遍历, 遍历多少个元素
        for (int i = front; i < front + size(); i++) {
            System.out.printf("arr[%d]=%d\n", i % maxSize, arr[i % maxSize]);
        }
    }

    // 求出当前队列的有效数据个数
    public int size() {
        return (rear + maxSize - front) % maxSize;
    }

    //显示队列的头数据,注意不是取出数据
    public int headQueue() {
        //判断
        if (isEmpty()) {
            throw new RuntimeException("队列空的,无法取出头数据");
        }
        return arr[front];
    }
}
