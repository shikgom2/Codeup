import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int result = 0;
		
		String firstName = "";
		String lastName = "";
		
		sc.nextLine();
		
		ArrayList<Integer> list = new ArrayList<Integer>();
		
		for ( int i = 0; i < n; i++ ){
			String temp = sc.nextLine();
			String month = temp.split(" ")[1];
			String date = temp.split(" ")[2];
			date = date.substring(0, date.length()-2);
			
			if ( i == 0 )
				firstName = temp.split(" ")[0];
			if ( i == n-1 )
				lastName = temp.split(" ")[0];
			
			if ( month.equals("January") )
				list.add(1 * 31 + Integer.parseInt(date ));
			else if ( month.equals("February") )
				list.add(2 * 31 + Integer.parseInt(date ));
			else if ( month.equals("March") )
				list.add(3 * 31 + Integer.parseInt(date ));
			else if ( month.equals("April") )
				list.add(4 * 31 + Integer.parseInt(date ));
			else if ( month.equals("May") )
				list.add(5 * 31 + Integer.parseInt(date ));
			else if ( month.equals("June") )
				list.add(6 * 31 + Integer.parseInt(date ));
			else if ( month.equals("July") )
				list.add(7 * 31 + Integer.parseInt(date ));
			else if ( month.equals("August") )
				list.add(8 * 31 + Integer.parseInt(date ));
			else if ( month.equals("September") )
				list.add(9 * 31 + Integer.parseInt(date ));
			else if ( month.equals("October") )
				list.add(10 * 31 + Integer.parseInt(date ));
			else if ( month.equals("November") )
				list.add(11 * 31 + Integer.parseInt(date ));
			else if ( month.equals("December") )
				list.add(12 * 31 + Integer.parseInt(date ));
		}
		
		for ( int i = 0; i < list.size()-1; i++ ){
			if( list.get(i) > list.get(i+1) )
				result++;
		}
		
		if ( result == 0 )
			System.out.println("No difference.");
		else if ( result == 1 )
			System.out.println(firstName + " is "+ result + " year older than " + lastName + ".");
		else
			System.out.println(firstName + " is "+ result + " years older than " + lastName + ".");
	}

}
