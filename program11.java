import java.util.*;

class Digit {
    private int CountDigit(int ino) {
        int icnt = 0;
        while (ino != 0) {
            icnt++;
            ino = ino / 10;
        }
        return icnt;
    }

    private int Power(int Base, int index) {
        int ians = 0;
        for (int icnt = 1; icnt <= index; icnt++) {
            ians = ians * Base;
        }
        return ians;
    }

    public boolean CheckArmstrong(int ino) {
        int itemp = ino;
        int isum = 0;
        int idigit = 0;
        int iret = 0;
        int icount = CountDigit(ino);
        while (ino != 0) {
            idigit = ino % 10;
            iret = Power(idigit, icount);
            isum = isum + iret;
            ino = ino / 10;
        }
        if (isum == itemp) {
            return true;
        } else {
            return false;
        }

    }
}

class program11 {
    public static void main(String[] args) {

        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter no: ");
        int ino = sobj.nextInt();

        Digit nobj = new Digit();

        boolean bret = nobj.CheckArmstrong(ino);
        if (bret == true) {
            System.out.println(ino + ":  It Is number");
        } else {
            System.out.println(ino + " : is not number");
        }
    }
}
