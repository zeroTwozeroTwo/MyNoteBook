package linkedlist;

import javax.swing.plaf.nimbus.AbstractRegionPainter;

public class DoubleLinkedListDemo {
    public static void main(String[] args) {
        //创建节点
        DoubleHeroNode doubleHeroNode1 = new DoubleHeroNode(1, "宋江", "及时雨");
        DoubleHeroNode doubleHeroNode2 = new DoubleHeroNode(2, "卢俊义", "玉麒麟");
        DoubleHeroNode doubleHeroNode3 = new DoubleHeroNode(3, "吴用", "智多星");
        DoubleHeroNode doubleHeroNode4 = new DoubleHeroNode(4, "林冲", "豹子头");
        //创建一个双向链表
        DoubleLinkedList doubleLinkedList = new DoubleLinkedList();
        //加入节点
//        doubleLinkedList.add(doubleHeroNode1);
//        doubleLinkedList.add(doubleHeroNode2);
//        doubleLinkedList.add(doubleHeroNode3);
//        doubleLinkedList.add(doubleHeroNode4);

        //顺序加入节点
        doubleLinkedList.addByOrder(doubleHeroNode4);
        doubleLinkedList.addByOrder(doubleHeroNode2);
        doubleLinkedList.addByOrder(doubleHeroNode1);
        doubleLinkedList.addByOrder(doubleHeroNode3);
        //遍历节点
        doubleLinkedList.list();
        //修改节点
        System.out.println("修改后的双向链表");
        DoubleHeroNode doubleHeroNode5 = new DoubleHeroNode(4,"公孙胜","入云龙");
        doubleLinkedList.list();

        //删除
        System.out.println("删除后的节点");
        doubleLinkedList.delete(2);
        doubleLinkedList.list();
    }

}

class DoubleLinkedList {
    //先初始化一个头节点 头节点不要动
    private DoubleHeroNode head = new DoubleHeroNode(0,"","");

    public DoubleHeroNode getHead() {
        return head;
    }

    //顺序添加节点
    //according to  按照
    //according to order add Double Linked List node
    public void addByOrder(DoubleHeroNode doubleHeroNode) {
        DoubleHeroNode temp = head;
        boolean flag = false;//用来说明编号是否存在
        while (true) {
            if (temp.next == null) {//等于空说明在链表最后
             break;
            }
            if (temp.next.no > doubleHeroNode.no) {//当前节点的编号大于要插入的节点就在当前节点前面插入
                break;
            } else if (temp.next.no == doubleHeroNode.no) {
                flag = true;//说明编号已经存在,设置为true
                break;
            }
            temp = temp.next;
        }
        if (flag) {
            System.out.println("编号已存在");
        }else {
            doubleHeroNode.next = temp.next;
            doubleHeroNode.pre = temp;
            if (temp.next != null) {
                temp.next.pre = doubleHeroNode;
            }
            temp.next = doubleHeroNode;
        }
    }

    //添加一个节点到双向链表的最后
    //add Double Linked List last node
    public void add(DoubleHeroNode heroNode) {
        //因为head节点不能动,因此我们需要一个辅助遍历 temp
        DoubleHeroNode temp = head;
        //遍历链表,找到最后
        while (true) {
            //找到链表的最后
            if (temp.next == null) {
                break;
            }
            //如果没有找到最后,就将temp后移
            temp = temp.next;
        }
        //当退出while循环时,temp就指向了链表最后
        //形成一个双向链表
        temp.next = heroNode;
        heroNode.pre = temp;
    }

    //修改一个节点的内容
    //update Double Linked List one node
    public void update(DoubleHeroNode newHeroNode) {
        //判断是否为空
        if (head.next == null) {
            System.out.println("链表为空");
            return;
        }
        //找到需要修改的节点,根据no编号
        //定义一个辅助变量
        DoubleHeroNode temp = head.next;
        boolean flag = false;
        while (true) {
            if (temp == null) {
                break;//已经遍历玩链表了
            }
            if (temp.no == newHeroNode.no) {
                //找到
                flag = true;
                break;
            }
            temp = temp.next;
        }
        //根据flag判断是否找到要修改的节点
        if (flag) {
            temp.name = newHeroNode.name;
            temp.nickname = newHeroNode.nickname;
        } else {
            System.out.println("没有找到编号为" + newHeroNode.no + "的节点,不能修改");
        }
    }


    //从双向链表中删除一个节点
    //说明:
    //1.对于双向链表,我们可以直接找到要删除的这个节点
    // delete Linked List one node
    public void delete(int no) {
        //判断当前链表是否为空
        if (head.next == null) {
            System.out.println("链表为空,无法删除");
            return;
        }
        DoubleHeroNode temp = head.next;
        boolean flag = false;//标志是否找到待删除节点
        while (true) {
            if (temp == null) {//已经到链表的最后
                break;
            }
            if (temp.no == no) {
                //找到了待删除节点的前一个节点temp
                flag = true;
                break;
            }
            temp = temp.next;
        }
        if (flag) {
            temp.pre.next = temp.next;
            //如果是最后一个节点,就不需要执行下面这句话,否则出现空指针
            if (temp.next != null) {
                temp.next.pre = temp.pre;
            }
            temp.next = null;
            temp.pre = null;
        } else {
            System.out.println("要删除的节点:" + no + "不存在");
        }
    }

    //实现双向链表[遍历]
    public void list() {
        //判断链表是否为空
        if (head.next == null) {
            System.out.println("链表为空~~~~");
            return;
        }
        //因为头节点,不能动,因此我们需要一个辅助变量来遍历
        DoubleHeroNode temp = head.next;
        while (true) {
            //判断是否到链表最后
            if (temp == null) {
                break;
            }
            //输出节点的信息
            System.out.println(temp);
            //将temp后移,一定小心
            temp = temp.next;
        }
    }
}


//定义一个HeroNode,每个HeroNode 对象就是一个节点
class DoubleHeroNode {
    public int no;
    public String name;
    public String nickname;
    public DoubleHeroNode next;//指向下一个节点
    public DoubleHeroNode pre;

    //构造器
    public DoubleHeroNode(int no, String name, String nickname) {
        this.no = no;
        this.name = name;
        this.nickname = nickname;
    }
    //为了方便显示,重写toString

    @Override
    public String toString() {
        return "HeroNode{" +
                "no=" + no +
                ", name='" + name + '\'' +
                ", nickname='" + nickname + '\'' +
                '}';
    }
}
