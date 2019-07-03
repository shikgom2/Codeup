import java.util.Scanner;
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int max = 0;
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		for ( int i = a; i <= b; i++ ){
			for ( int j = a; j <= b; j++ ){
				int temp = i * j;
				String tempString = Integer.toString(temp);
				if ( tempString.equals(new StringBuilder(tempString).reverse().toString())) {
					if ( max < temp )
						max = temp;
				}
			}
		}
		System.out.println(max);
	}
}

