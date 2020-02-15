package sort;

import java.util.Arrays;

public class ShellSort {
    static int index = 0;

    public static void main(String[] args) {
        int[] arr = {49, 38, 65, 97, 76, 13, 27, 49, 55, 4};
        shellSort2(arr);
        System.out.println(Arrays.toString(arr));
    }

    //希尔排序的交换法
    public static void shellSort(int[] arr) {
        int count = 0;
        for (int gap = arr.length / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < arr.length; i++) {
                for (int j = i - gap; j >= 0; j -= gap) {
                    if (arr[j] > arr[j + gap]) {
                        int temp = arr[j];
                        arr[j] = arr[j + gap];
                        arr[j + gap] = temp;
                    }
                }
            }
            System.out.println("希尔排序" + (++count) + "轮结果:" + Arrays.toString(arr));
        }
    }

    //对交换式的希尔排序进行优化->移位法
    public static void shellSort2(int[] arr) {
        //增量gap,并逐步缩小增量
        for (int gap = arr.length / 2; gap > 0; gap /= 2) {
            //从第gap个元素,逐个对其所在的组进行插入排序
            for (int i = gap; i < arr.length; i++) {
                int index = i;
                int temp = arr[index];
                if (arr[index] < arr[index - gap]) {
                    while (index - gap >= 0 && temp < arr[index - gap]) {
                        arr[index] = arr[index - gap];
                        index -= gap;
                    }
                    //退出循环表示找到了要插入的位置
                    arr[index] = temp;
                }
            }
        }
    }
}
