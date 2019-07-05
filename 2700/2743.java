import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		sc.nextLine();
		int d = sc.nextInt();
		int e = sc.nextInt();
		
		int plus = 0;
		int minus = 0;
		int mul = 0;
		int div = 0;
		
		if ( a + b == c )
			plus = 1;
		if ( a - b == c )
			minus = 1;
		if ( a * b == c )
			mul = 1;
		if ( a / b == c )
			div = 1;
		if ( plus == 1 )
			System.out.println(d + e);
		if ( minus == 1 )
			System.out.println(d - e);
		if ( mul == 1 )
			System.out.println(d * e);
		if ( div == 1 )
			System.out.println(d / e);
		if ( plus == 0 && minus == 0 && mul == 0 && div == 0 )
			System.out.println("NO");
	}
}
