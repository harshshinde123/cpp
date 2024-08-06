import java.util.*;

class Numbers {
    public void CommanFact(int ino1, int ino2) {
        int icnt = 0;
        System.out.println(" Comman Factors are : ");
        for (icnt = 1; (icnt <= ino1 / 2) && (icnt <= ino2 / 2); icnt++) {
            if ((ino1 % icnt == 0) && (ino2 % icnt == 0)) {
                System.out.println(icnt);
            }

        }
    }
}

class program9 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter no: ");
        int ino1 = sobj.nextInt();

        System.out.println("Please enter no: ");
        int ino2 = sobj.nextInt();

        Numbers nobj = new Numbers();

        nobj.CommanFact(ino1, ino2);
    }
}
