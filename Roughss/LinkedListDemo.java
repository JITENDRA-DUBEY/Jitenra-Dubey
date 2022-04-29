import java.util.*;

public class LinkedListDemo {
    public static void main(String args[]){
        LinkedList<Integer>a1=new LinkedList<>();
        LinkedList<Integer>a2=new LinkedList<>(List.of(20,30,40,50,60));
        a1.add(10);
        a1.add(0, 5);
        a1.addAll(a2);
    
         Iterator<Integer>it=a1.iterator();
         while(it.hasNext()){
             System.out.print(it.next()+" ");
         }
      

    }
}