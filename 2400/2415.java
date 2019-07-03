import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner (System.in);
		
		int n = sc.nextInt();
		sc.nextLine();
		
		String temp = "";
		String friendName = "";
		
		ArrayList<String> list = new ArrayList<String>();
		
		double result = 0;
		
		for ( int i = 0; i < n; i++ ){
			temp = sc.nextLine();
			list.add(temp );
		}
		
		friendName = sc.nextLine();

		for ( int i = 0; i < n; i++ ){
			if(friendName.equals(list.get(i).split(",")[0])){
				for( int j = 3; j < list.get(i).split(",").length; j++ ){
					System.out.println(list.get(i).split(",")[j]);
				}
			}
		}
	}
}

