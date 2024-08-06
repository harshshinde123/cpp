import java.util.*;

class pattrn1256 {
    public void Display(String str) {
        char Arr[] = str.toCharArray();
        int i = 0, j = 0;
        for (i = 0; i < Arr.length; i++) {
            for (j = 0; j < Arr.length; j++) {
                System.out.println(Arr[j] + "\t");
            }
        }
    }
}

public class pattrn6 {
    public static void main(String[] args) {
        pattrn1256 pobj = new pattrn1256();
        try (Scanner sobj = new Scanner(System.in)) {
            System.out.println("Enter row:");
            String s = sobj.nextLine();

            pobj.Display(s);
        }
        
    }
}
