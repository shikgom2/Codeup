import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		double num = sc.nextDouble();
		
		double i = 0;
		double j = 1;
		

		while(true){
			if ( Math.round(i / j * 1000.0) / 1000.0  == Math.round(num * 100.0) / 10000.0){
				System.out.print((int)i + "/" + (int)j);
				return;
			}
				
			else if ( i == j ){
				j++;
				i = 0;
			}
			else{
				i++;
			}
				
		}
	}
}
