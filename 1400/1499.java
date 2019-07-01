import java.util.*;
import java.math.*;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int i,j;
        
        i = sc.nextInt();
        j = sc.nextInt();
        int[] arr;
        arr = new int[10000];
        
        for(int cnt = 0 ; cnt < 10000; cnt++)
        {
        	arr[cnt] = -10000;
        }
        
        for(int cnt = 0 ; cnt < i; cnt++)
        {
        	arr[cnt] = sc.nextInt();
        }
        
        int min = -3000;
        int idx = 0;
        
        while(idx < i) {
        	min = -10000;
	        for(int a = idx; a < j+idx; a++)
	        {
	        	if(min < arr[a])
	        	{
	        		min = arr[a];
	        	}
	        }
	        idx += j;
	        System.out.print(min + " ");
        }
    }
}

