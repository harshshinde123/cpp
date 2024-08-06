import java.util.*;

class program3 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0, no2 = 0, ians = 0;

        System.out.println("Enter First Number : ");
        no1 = sobj.nextInt();
        System.out.println("Enter Second Number : ");
        no2 = sobj.nextInt();

        ians = no1 + no2;
        System.out.println("Addition is : " + ians);

    }
}
