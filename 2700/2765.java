import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		ArrayList<Integer> array1 = new ArrayList<Integer>();
		ArrayList<Integer> array2 = new ArrayList<Integer>();
		
		ArrayList<Integer> inter = new ArrayList<Integer>();
		ArrayList<Integer> union = new ArrayList<Integer>();
		
		int n = sc.nextInt();
		sc.nextLine();
		
		for ( int i = 0; i < n; i++ ){
			int temp = sc.nextInt();
			array1.add(temp);
		}
		
		sc.nextLine();
		n = sc.nextInt();
		
		for ( int i = 0; i < n; i++ ){
			int temp = sc.nextInt();
			array2.add(temp);
		}
		for ( int i = 0; i < array1.size(); i++ ){
			if ( array2.contains(array1.get(i)) )
				inter.add(array1.get(i));
			if ( !union.contains(array1.get(i)) )
				union.add(array1.get(i));
		}
		for ( int i = 0; i < array2.size(); i++ ){
			if ( !union.contains(array2.get(i)) )
				union.add(array2.get(i));
		}
		for ( int i = 0; i < inter.size(); i++ ){
			System.out.print(inter.get(i) + " " );
		}
		if ( inter.size() == 0 )
			System.out.print("0");
		
		System.out.println();
		Collections.sort(union);
		
		for ( int i = 0; i < union.size(); i++ ){
			System.out.print(union.get(i) + " " );
		}
	}
}

