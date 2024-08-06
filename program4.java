import java.util.*;

class program4 {

    static int Addition(int i, int j) {
        int sum = 0;
        sum = i + j;
        return sum;
    }

    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0, no2 = 0, ians = 0;

        System.out.println("Enter First Number : ");
        no1 = sobj.nextInt();
        System.out.println("Enter Second Number : ");
        no2 = sobj.nextInt();

        ians = Addition(no1, no2);
        System.out.println("Addition is : " + ians);

    }
}
