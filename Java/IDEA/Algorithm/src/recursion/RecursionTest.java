package recursion;

public class RecursionTest {
    public static void main(String[] args) {
//        test(5);
        int result = factorial(3);
        System.out.println(result);
    }

    //打印
    public static void test(int n) {
        if (n > 2) {
            test(n - 1);
        }
        System.out.println("n = " + n);
    }

    //阶乘
    public static int factorial(int n) {
        if (n == 1) {
            return 1;
        }

        return n * factorial(n - 1);
    }
}
