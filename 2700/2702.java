import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int temp;

		int[][] array = new int[n][6];
		int result = 0;
		int max = 0;

		for ( int i = 0; i < n; i++ ){
			for ( int j = 0; j < 6; j++ ){
				temp = sc.nextInt();
				array[i][j] = temp;
			}
		}

		for ( int i = 0; i < 6; i++ ){
			for ( int j = 0; j < n; j++ ){
				if ( max < array[j][i] )
					max = array[j][i];
			}
			result = result + max;
			max = 0;
		}

		System.out.print(result);
	}
}

