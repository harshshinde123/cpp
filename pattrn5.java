import java.util.*;

class pattrn {
    public void Display(int irow, int icol) {
        int i = 0, j = 0;
        int icnt = 1;
        for (i = 1; i <= irow; i++) {
            for (j = 1; j <= icol; j++) {

                System.out.println((icnt % 10)+1 + "*\t");
                icnt++;
            }
            System.out.println();
        }
    }
}

class pattrn5 {
    public static void main(String[] args) {
        pattern pobj = new pattern();
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter row:");
        int i = sobj.nextInt();
        System.out.println("Enter coloumn:");
        int j = sobj.nextInt();
        pobj.Display(i, j);
        ;
    }
}
