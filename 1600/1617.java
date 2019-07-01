import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String num1 =sc.nextLine(); 
        String num2="";
        int len;

            num2="";

            len= num1.length();
            for(int f1=0;f1<len;f1++)
            {
                num2+=num1.substring(len - 1 -f1, len - f1);
            }    
            String str = Integer.toString( Integer.parseInt(num2) + Integer.parseInt(num1)); 
        	
            int answer = 0;
            
            for (int i = 0; i <= str.length(); i++) {
    				String subString = str;
    				String reverse = new StringBuffer(subString).reverse().toString();
    				if(!subString.equals(reverse)) {
    					answer++;
    				}
    		}
            if(answer == 0)
            {
            	System.out.println("YES");
            }
            else {
            	System.out.println("NO");
            }
    }
}
