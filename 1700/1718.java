import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		String temp = sc.nextLine();
		
		int result = 0;
		int c = 0;
		int h = 0;
		
		try{
			if ( temp.contains("H") ){
				String cNumber = temp.substring(temp.indexOf('C')+1, temp.indexOf('H'));
				c = Integer.parseInt(cNumber) * 12;
			} else { 
				String cNumber = temp.substring(temp.indexOf('C')+1, temp.length());
				c = Integer.parseInt(cNumber) * 12;
			}
		}catch(Exception e){
			
		}
		
		try{
			String hNumber = temp.substring(temp.indexOf('H')+1, temp.length());
			h = Integer.parseInt(hNumber);		
		}catch(Exception e){
			
		}
		
		if (temp.contains("C") && c == 0)
			c = 12;
		if (temp.contains("H") && h == 0)
			h = 1;
		
		result = c + h;
		
		System.out.println(result);
	}
}
