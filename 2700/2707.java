import java.util.Scanner;
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		double n = sc.nextDouble();
		
		for ( int i = 1; i <= n; i++ ){
			for ( int j = 1; j <= n; j++ ){
				if ( Math.pow(i, j) == n && Math.pow(i, j) == (int)Math.pow(i, j) ){
					System.out.println(i);
					return;
				} else if ( Math.pow(i, j) > n )
					break;
			}
		}
	}
}
