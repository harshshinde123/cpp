import java.util.*;

class Node {
    public int Data;
    public Node Next;

    public Node(int no) {
        this.Data = no;
        this.Next = null;
    }
}

class SinglyLL {
    public Node Head;
    public int Count;

    public SinglyLL() {
        Head = null;
        Count = 0;
    }

    protected void finalize()// Distructor
    {

    }

    public void InsertFirst(int no) {
        Node newn = new Node(no);
        if (this.Head == null) {
            this.Head = newn;
        } else {
            newn.Next = this.Head;
            this.Head = newn;
        }
        this.Count++;
    }

    public void Display() {
        Node temp = this.Head;
        while (temp.Next != null) {
            System.out.print("|" + temp.Data + "|->");
            temp = temp.Next;
        }
    }
}

public class dsa {
    public static void main(String[] args) {
        SinglyLL obj = new SinglyLL();
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.Display();
    }

}
