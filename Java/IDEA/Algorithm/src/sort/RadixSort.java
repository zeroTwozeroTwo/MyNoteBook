package sort;

import java.util.Arrays;

public class RadixSort {
    public static void main(String[] args) {
        int[] arr = {53, 3, 542, 748, 14, 214};
        radixSort(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void radixSort(int[] arr) {
        //定义一个二维数组,表示10个桶,每个桶就是一个一维数组
        //说明
        //1. 二维数组包含10个一维数组
        //2. 为了防止在放入数的时候,数据溢出,则每个一维数组的大小为,排序数组的大小. arr.length
        //3. 明确: 桶排序就是用空间来换时间
        int[][] bucket = new int[10][arr.length];

        //为了记录每个桶中,实际存放了多少数据,可以定义一个一维数组来记录
        int[] bucketElementCounts = new int[10];

        //先得到数组中最大数的位数
        int max = arr[0];//假设第一个数就是最大数
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        //得到最大数是几位数
        int maxLength = String.valueOf(max).length();
        //排序
        for (int i = 0; i < maxLength; i++) {
            for (int j = 0; j < arr.length; j++) {
                //取出10^n位数的值
                int digitOfElement = (int) (arr[j] / Math.pow(10, i) % 10);
                //放入对应的桶中
                bucket[digitOfElement][bucketElementCounts[digitOfElement]] = arr[j];
                bucketElementCounts[digitOfElement]++;
            }
            //遍历每个桶,并取出元素
            int index = 0;
            //遍历每一桶,并将桶中的数据,放入原数组
            for (int k = 0; k < bucket.length; k++) {
                //如果桶中有数据,我们才放入原数组中
                if (bucketElementCounts[k] != 0) {
                    //循环将桶中元素放入
                    for (int l = 0; l < bucketElementCounts[k]; l++) {
                        arr[index++] = bucket[k][l];
                    }
                }
                //放完之后清空桶的元素
                bucketElementCounts[k] = 0;
            }
            System.out.println("第" + (i + 1) + "轮:" + Arrays.toString(arr));
        }
    }
}
