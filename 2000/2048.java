import java.util.Scanner;
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int[][] array = new int[4][4];
		
		int total = 0;
		for ( int i = 0; i < 4; i++ ){
			for ( int j = 0; j < 4; j++ ){
				array[i][j] = sc.nextInt();
				total = total + array[i][j];
			}
		}
		
		for ( int i = 1; i < 16; i++ ){
			if ( total == Math.pow(2, i) ){
				System.out.println("yes");
				return;
			}
		}
		System.out.println("no");
	}
}

