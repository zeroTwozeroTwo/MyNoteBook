package sort;

import java.util.Arrays;

public class QuickSort {
    public static void main(String[] args) {
        int[] arr = {-9,78,0,23,-567,70};
        quickSort(arr,0,arr.length - 1);
        System.out.println(Arrays.toString(arr));

    }

    public static void quickSort(int[] arr,int left,int right) {
        int l = left;//左下标
        int r = right;//右下标
        int pivot = arr[(left + right) / 2];//中轴值
        //while 循环的目的 是让比pivot 值小的放到左边
        //                   比pivot 值大的放到右边
        while (l < r) {
            //在pivot的左边一直找,找到大于等于pivot值,才退出
            while (arr[l] < pivot) {
                l++;
            }
            //在pivot的右边一直找,找到小于等于pivot值,才退出
            while (arr[r] > pivot) {
                r--;
            }
            //如果 l >= r 说明pivot 左边全是小于等于pivot的值 右边全是大于等于pivot的值
            if (l >= r) {
                break;
            }
            //交换
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;

            //如果交换完后,发现arr[l] == pivot 就让r--
            if (arr[l] == pivot) {
                r--;
            }
            //如果交换完后,发现arr[r] == pivot 就让l++
            if (arr[r] == pivot) {
                l++;
            }
        }
        //如果l == r 必须l++ ,r-- ,否则会出现栈溢出
        if (l == r) {
            l++;
            r--;
        }
        //向左递归
        if (left < r) {
            quickSort(arr,left,r);
        }
        //向右递归
        if (right > l) {
            quickSort(arr,l,right);
        }
    }
}
