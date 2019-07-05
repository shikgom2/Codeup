import java.util.*;
import java.math.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        
        String name = sc.nextLine();
        char[] arr;
        
        arr = new char[20];
        
        arr = name.toCharArray();
        
        if(arr.length == 1)
        {
        	System.out.println("+-+");
        	System.out.println("|" + name + "|");
        	System.out.print("+-+");
        }

        else {
	        for(int i = 0 ; i<arr.length*2;i++)
	        {
	        	if(i%2 == 0)
	        	{
	        		System.out.print("+");
	        	}
	        	else {
	        		System.out.print("-");
	        	}
	        	
	        }
    		System.out.print("+");

	        System.out.println();
	        
	        System.out.print("|");
	        for(int i = 0 ; i<arr.length;i++)
	        {
	        	System.out.print(arr[i]);
	        	System.out.print("|");
	        }
	        System.out.println();
	        for(int i = 0 ; i<arr.length*2;i++)
	        {
	        	if(i%2 == 0)
	        	{
	        		System.out.print("+");
	        	}
	        	else {
	        		System.out.print("-");
	        	}
	        }
    		System.out.print("+");

	    }
	}
}
