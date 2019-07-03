import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
			Scanner sc = new Scanner (System.in);
		
			int n = sc.nextInt();
			sc.nextLine();
			
			String temp = "";
			
			ArrayList<String> list = new ArrayList<String>();
			
			double result = 0;
			
			for ( int i = 0; i < n; i++  ){
				temp = sc.nextLine();
				list.add(temp);
			}
			
			for ( int i = 0; i < n; i++ ){
				result = result + (list.get(i).split(",").length - 3);
			}
			
			result = result / n;
			
			System.out.printf("%.2f", result);
	}
}
