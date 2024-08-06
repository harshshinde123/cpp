import java.util.*;

class shinde {
    public void Display(int irow, int icol) {
        int i = 0, j = 0;
        int icnt = 0;
        for (i = 1; i <= irow; i++) {
            for (j = 1; j <= icol; j++) {
                System.out.print(((icnt % 10) + 1) + "\t");
                icnt++;
            }

            System.out.println();
        }
    }
}

class harsh {
    public static void main(String[] args) {
        shinde pobj = new shinde();
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter row:");
        int i = sobj.nextInt();
        System.out.println("Enter coloumn:");
        int j = sobj.nextInt();
        pobj.Display(i, j);

    }
}
