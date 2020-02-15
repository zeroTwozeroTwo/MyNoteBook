package linkedlist;

public class Josepfu {
    public static void main(String[] args) {
        CircleSingleLinkedList circleSingleLinkedList = new CircleSingleLinkedList();
        circleSingleLinkedList.add(5);
        circleSingleLinkedList.list();
        //出圈
        circleSingleLinkedList.countBoy(1,2,5); //2->4->1->5->3
    }
}

class CircleSingleLinkedList {
    //创建first节点
    private BoyNode first;

    //添加节点,构成一个环形链表
    //add node,construct annular Linked list
    public void add(int number) {
        //验证
        if (number < 1) {
            System.out.println("传入的数据不正确");
            return;
        }
        BoyNode curBoy = null;//辅助指针,帮助构建环形链表
        //使用for来创建我们的环形链表
        for (int i = 1; i <= number; i++) {
            BoyNode boyNode = new BoyNode(i);
            //如果是第一个节点
            if (i == 1) {
                first = boyNode;
                first.setNext(first);//构成环
                curBoy = first;
            } else {
                curBoy.setNext(boyNode);
                boyNode.setNext(first);
                curBoy = boyNode;
            }
        }
    }


    //根据用户的输入,计算节点出圈的顺序
    // Calculation : 计算
    //according to User input,Calculation node out circle annular order
    /**
     * @param startNo  表示从第几个节点开始数
     * @param countNum 表示数几下
     * @param nums     表示有多少小孩在圈中
     */
    public void countBoy(int startNo, int countNum, int nums) {
        //数据效验
        if (first == null || startNo < 1 || startNo > nums) {
            System.out.println("参数输入有误,请重新输入");
            return;
        }
        //创建辅助指针
        BoyNode helper = first;
        //让helper 事先指向环形链表的最后一个节点
        while (true) {
            if (helper.getNext() == first) {//说明helper指向了最后
                break;
            }
            helper = helper.getNext();
        }
        //报数前,先让first 和 helper 移动 k - 1次
        for(int i = 0;i < startNo - 1;i++) {
            first = first.getNext();
            helper = helper.getNext();
        }
        //当报数时,让first 和 helper 指针同时移动 m - 1次 然后出圈
        //这是一个循环操作,直到圈中只有一个节点
        while (true) {
            if (helper == first) { //说明圈中只有一个节点
                break;
            }
            //让first 和 helper 指针同时移动 countNum - 1
            for(int i = 0;i < countNum - 1;i++) {
                first = first.getNext();
                helper = helper.getNext();
            }
            //这时first指向的节点,就是要出圈的节点
            System.out.println("出圈的节点编号:" + first.getNo());
            //将first指向的节点出圈
            first = first.getNext();
            helper.setNext(first);
        }
        System.out.println("最后留在圈中的节点编号为:" + first.getNo());
    }

    //遍历当前环形链表
    //ergodic 遍历
    //node in Linked list ergodic
    public void list() {
        //判断链表是否为空
        if (first == null) {
            System.out.println("链表为空~~~~");
            return;
        }
        //因为first不能动,所以要使用辅助指针完成遍历
        BoyNode curBoy = first;
        while (true) {
            System.out.println("节点的编号:" + curBoy.getNo());
            if (curBoy.getNext() == first) { //说明已经遍历完毕
                break;
            }
            curBoy = curBoy.getNext();//curBoy 后移
        }
    }


}


//创建一个Boy类,表示一个节点
class BoyNode {
    private int no;//编号
    private BoyNode next;

    public void setNext(BoyNode next) {
        this.next = next;
    }

    public BoyNode(int no) {
        this.no = no;
    }

    public int getNo() {
        return no;
    }

    public void setNo(int no) {
        this.no = no;
    }

    public BoyNode getNext() {
        return next;
    }

}
