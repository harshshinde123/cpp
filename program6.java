import java.util.*;

class Arithematic {
    public int ivalue1;//characterstic
    public int ivalue2;

    public Arithematic(int i, int j)
     {  // parameterise const
        ivalue1 = i;
        ivalue2 = j;
    }

    public int Addition() 
    {          //Behaviour
        int sum = 0;
        sum = ivalue1 + ivalue2;
        return sum;
    }
}

class program6 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        int no1 = 0, no2 = 0, ians = 0;

        System.out.println("Enter First Number : ");
        no1 = sobj.nextInt();
        System.out.println("Enter Second Number : ");
        no2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(no1, no2);

        ians = aobj.Addition();
        System.out.println("Addition is : " + ians);

    }
}
