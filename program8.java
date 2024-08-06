import java.util.*;

class Numbers {
    public void EvenFact(int ino) {
        int icnt = 0;
        for (icnt = 1; icnt <= (ino / 2); icnt++) {  //icnt+=2,icnt=icnt+2
            if ((ino % icnt) == 0) {                                    //use && for if
                if ((icnt % 2) == 0) {
                    System.out.println("Even Factor is : " + icnt);
                }
            }
        }

    }
}

class program8 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter no: ");
        int ino = sobj.nextInt();

        

        Numbers nobj = new Numbers();

        nobj.EvenFact(ino);
    }
}
