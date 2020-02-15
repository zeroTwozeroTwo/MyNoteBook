package sort;

import java.util.Arrays;

public class InsertSort {
    public static void main(String[] args) {
        int[] arr = {101, 34, 119, 1};
        insertSort(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void insertSort(int[] arr) {
        //时间复杂度 O(nlogRn)
        for (int i = 0; i < arr.length - 1; i++) {
            int insertValue = arr[i + 1];
            int insertIndex = i;
            //说明
            // 1. insertIndex >= 0 保证给insertValue 找插入位置,不越界
            // 2. insertValue < arr[insertIndex] 待插入的数,还没有找到插入的位置
            // 3. 找到了就需要将arr[insertIndex] 后移
            while (insertIndex >= 0 && insertValue < arr[insertIndex]) {
                arr[insertIndex + 1] = arr[insertIndex];
                insertIndex--;
            }
            arr[insertIndex + 1] = insertValue;
        }
    }
}
