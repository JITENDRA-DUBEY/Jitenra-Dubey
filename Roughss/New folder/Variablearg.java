import java.lang.*;
import java.util.*;
public class Variablearg 
{

    int variableArgs(int ...a)
    {
        int max=0,sum=0;
        for(int x:a)
        {
            
            if(x>max)
            max=x;
        }
      return max;
    }
    int variableArgse(int ...a)
    {
        int sum=0;
        for(int x:a)
        {
            sum+=x;
            
        }
      return sum;
    }
    public static void main(String args[])
    {  Variablearg a=new Variablearg();
      System.out.println(a.variableArgs());
      System.out.println("Sum : "+a.variableArgse());
      System.out.println(a.variableArgs(10));
      System.out.println("Sum : "+a.variableArgse(10));
      System.out.println(a.variableArgs(10,20));
      System.out.println("Sum : "+a.variableArgse(10,20));
      System.out.println(a.variableArgs(2,1,3));
      System.out.println("Sum : "+a.variableArgse(2,1,4));
    }

}
