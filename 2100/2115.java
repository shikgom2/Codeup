import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		BigDecimal result = new BigDecimal(1);

		for ( int i = 1; i <= n; i++ ){
			result = result.multiply(new BigDecimal(i));
		}

		System.out.print(result);
	}
}

