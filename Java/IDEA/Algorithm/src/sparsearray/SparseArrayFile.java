package sparsearray;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class SparseArrayFile {
    public static void main(String[] args) {
        //创建原始二维数组
        int chessArr1[][] = new int[11][11];
        //初始化棋子 0 代表没有  1代表黑子 2代表蓝子
        chessArr1[2][2] = 1;
        chessArr1[3][4] = 2;
        chessArr1[4][5] = 2;
        //原始二维数组
        System.out.println("原始二维数组:");
        for (int[] row : chessArr1) {
            for (int data : row) {
                System.out.print(data + "  ");
            }
            System.out.println();
        }


        //遍历原始二维数组 得到非0的值
        int sum = 0;//用于保存非0的值的个数
        for (int i = 0; i < chessArr1.length; i++) {
            for (int j = 0; j < chessArr1[i].length; j++) {
                if (chessArr1[i][j] != 0) {
                    sum++;
                }
            }
        }

        //创建对应的稀疏数组
        int sparseArr[][] = new int[sum + 1][3];
        sparseArr[0][0] = 11;
        sparseArr[0][1] = 11;
        sparseArr[0][2] = sum;
        //遍历二维数组,将非0的值存放到sparseArray中
        int count = 0;//count 用于记录是第几个非0数据
        for (int i = 0; i < chessArr1.length; i++) {
            for (int j = 0; j < chessArr1[i].length; j++) {
                if (chessArr1[i][j] != 0) {
                    count++;
                    sparseArr[count][0] = i;
                    sparseArr[count][1] = j;
                    sparseArr[count][2] = chessArr1[i][j];
                }
            }
        }
        //遍历稀疏数组
        System.out.println("对应的稀疏数组:");
        for (int[] row : sparseArr) {
            for (int data : row) {
                System.out.print(data + "  ");
            }
            System.out.println();
        }

        //写出文件到系统存盘
        FileWriter fiw = null;
        String enter = "\r\n";//代表回车
        try {
            fiw = new FileWriter("D:\\sparse.txt");
            for (int i = 0; i < sparseArr.length; i++) {
                fiw.write(sparseArr[i][0] + "  " + sparseArr[i][1] + "  " + sparseArr[i][2] + enter);
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try {
                fiw.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

        //从系统盘中读取文件并创建稀疏数组
        FileReader fir = null;
        BufferedReader fr = null;
        String line = null;
        int sparseArr2[][];
        try {
            fir = new FileReader("D:\\sparse.txt");
            fr = new BufferedReader(fir);
            //根据文件创建稀疏数组并给第一行赋值
            String strSparseArr[] = fr.readLine().split("  ");
            sparseArr2 = new int[Integer.valueOf(strSparseArr[2]) + 1][3];
            for (int i = 0; i < strSparseArr.length; i++) {
                sparseArr2[0][i] = Integer.valueOf(strSparseArr[i]);
            }
            int index = 0;//稀疏数组的行索引
            while ((line = fr.readLine()) != null) {
                //给稀疏数组后面几行赋值
                index++;//从第二行开始赋值,第一行在读取时已经赋值
                strSparseArr = line.split("  ");
                for (int i = 0; i < 3; i++) {// i等于3是因为稀疏数组是3列的要给每一列赋值
                    sparseArr2[index][i] = Integer.valueOf(strSparseArr[i]);
                }
            }
            System.out.println("恢复后的稀疏数组:");
            for (int[] row : sparseArr2) {
                for (int data : row) {
                    System.out.print(data + "  ");
                }
                System.out.println();
            }
            //将稀疏数组--> 恢复成原始二维数组
            /*
            1.先读取稀疏数组第一行,根据第一行的数据,创建原始二维数组
            2.在读取稀疏数组后几行,并赋给 原始二维数组。
             */
            // 1.先读取稀疏数组第一行,根据第一行的数据,创建原始二维数组
            int chessArr2[][] = new int[sparseArr[0][0]][sparseArr[0][1]];

            //2.在读取稀疏数组后几行(从第二行开始),并赋给 原始二维数组。
            for (int i = 1; i < sparseArr2.length; i++) {//i = 1 从第二行开始读
                chessArr2[sparseArr2[i][0]][sparseArr2[i][1]] = sparseArr2[i][2];
            }

            //输出恢复后的原始二维数组
            System.out.println();
            System.out.println("恢复后的原始二维数组:");

            for (int[] row : chessArr2) {
                for (int data : row) {
                    System.out.print(data + "  ");
                }
                System.out.println();
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                fir.close();
            } catch (IOException e) {
                e.printStackTrace();
            } finally {
                try {
                    fr.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
