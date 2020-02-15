package sparsearray;

public class SparseArray {

    public static void main(String[] args) {
        //创建一个原始的二维数组 11*11
        //0:表示没有棋子 1:表示黑子 2:表示蓝子
        int chessArr1[][] = new int[11][11];
        chessArr1[1][2] = 1;
        chessArr1[2][4] = 2;
        chessArr1[4][5] = 2;
        //输出原始二维数组
        System.out.println("原始二维数组");
        for (int[] row : chessArr1) {
            for (int data : row) {
                System.out.print(data + "  ");
            }
            System.out.println();
        }

        //将二维数组转成稀疏数组
        //1.先遍历二维数组 得到非0数组的个数
        int sum = 0;
        for (int i = 0; i < chessArr1.length; i++) {
            for (int j = 0; j < chessArr1[i].length; j++) {
                if (chessArr1[i][j] != 0) {
                    sum++;
                }
            }
        }

        //2.创建对应的稀疏数组
        int sparseArray[][] = new int[sum + 1][3];
        //给稀疏数组赋值
        sparseArray[0][0] = 11;
        sparseArray[0][1] = 11;
        sparseArray[0][2] = sum;

        //遍历二维数组,将非0的值存放到sparseArray中
        int count = 0;//count 用于记录是第几个非0数据
        for (int i = 0; i < chessArr1.length; i++) {
            for (int j = 0; j < chessArr1[i].length; j++) {
                if (chessArr1[i][j] != 0) {
                    count++;
                    sparseArray[count][0] = i;
                    sparseArray[count][1] = j;
                    sparseArray[count][2] = chessArr1[i][j];
                }
            }
        }
        //输出稀疏数组
        System.out.println();
        System.out.println("得到的稀疏数组为:");
        for (int i = 0; i < sparseArray.length; i++) {
            System.out.printf("%d\t%d\t%d\t\n", sparseArray[i][0],
                    sparseArray[i][1], sparseArray[i][2]);
        }

        //将稀疏数组--> 恢复成原始二维数组
        /*
        1.先读取稀疏数组第一行,根据第一行的数据,创建原始二维数组
        2.在读取稀疏数组后几行,并赋给 原始二维数组。
         */
        // 1.先读取稀疏数组第一行,根据第一行的数据,创建原始二维数组
        int chessArr2[][] = new int[sparseArray[0][0]][sparseArray[0][1]];

        //2.在读取稀疏数组后几行(从第二行开始),并赋给 原始二维数组。
        for (int i = 1; i < sparseArray.length; i++) {//i = 1 从第二行开始读
            chessArr2[sparseArray[i][0]][sparseArray[i][1]] = sparseArray[i][2];
        }

        //输出恢复后的二维数组
        System.out.println();
        System.out.println("恢复后的二维数组");

        for (int[] row : chessArr2) {
            for (int data : row) {
                System.out.print(data + "  ");
            }
            System.out.println();
        }
    }
}
