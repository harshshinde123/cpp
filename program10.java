import java.util.*;

class Numbers {
    public int FactMultiplication(int ino) {
        int icnt = 0;
        int imult=1;
        for(icnt=1;icnt<=(ino/2);icnt++)
        {
            if((ino%icnt)==0)
            {
                imult=imult*icnt;
            }
        }

       return imult;
    }
}

class program10 {
    public static void main(String[] args) {
        
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter no: ");
        int ino = sobj.nextInt();

        

        Numbers nobj = new Numbers();

       int iret =  nobj.FactMultiplication(ino);
       System.out.println("Multiplication is: "+iret);
    }
}
