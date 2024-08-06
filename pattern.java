import java.util.*;


 public class pattern
{
  public void Display(int irow,int icol)
  {
    int i=0,j=0;
    for(i=1;i<irow;i++)
    {  
      System.out.println();

        for(j=1;j<icol;j++)
        {
            System.out.print("*\t");
        }
        System.out.println();
    }
  }


}
class pattrn2
{
   public static void main(String[] args) 
   {
       pattern pobj = new pattern();
       Scanner sobj = new Scanner(System.in);
     System.out.println("Enter row:");
     int i = sobj.nextInt();
     System.out.println("Enter coloumn:");
     int j = sobj.nextInt();
       pobj.Display(i,j);
   }
}