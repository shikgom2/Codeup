import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		int count = 0;
		double average = 0;
		double total = 0;
		
		sc.nextLine();
		
		ArrayList<String> list = new ArrayList<String>();
		ArrayList<String> resultList = new ArrayList<String>();
		
		for ( int i = 0; i < n; i++ ){
			String temp = sc.nextLine();
			list.add(temp);
		}
		
		for ( int i = 0; i < n; i++ ){
			String temp = list.get(i).split(" ")[1];
			if ( temp.equals("A+") )
				total = total + 4.3 * Double.parseDouble(list.get(i).split(" ")[2]);
			else if ( temp.equals("A0") )
				total = total + 4.0 * Double.parseDouble(list.get(i).split(" ")[2]);
			else if ( temp.equals("A-") )
				total = total + 3.7 * Double.parseDouble(list.get(i).split(" ")[2]);
			else if ( temp.equals("B+") )
				total = total + 3.3 * Double.parseDouble(list.get(i).split(" ")[2]);
			else if ( temp.equals("B0") )
				total = total + 3.0 * Double.parseDouble(list.get(i).split(" ")[2]);
			else if ( temp.equals("B-") )
				total = total + 2.7 * Double.parseDouble(list.get(i).split(" ")[2]);
			else if ( temp.equals("C+") ){
				total = total + 2.3 * Double.parseDouble(list.get(i).split(" ")[2]);
				resultList.add(" " + list.get(i).split(" ")[0] + " (C+)");
				count++;
			}
				
			else if ( temp.equals("C0") ){
				total = total + 2.0 * Double.parseDouble(list.get(i).split(" ")[2]);
				resultList.add(" " + list.get(i).split(" ")[0] + " (C0)");
				count++;
			}
			else if ( temp.equals("C-") ){
				total = total + 1.7 * Double.parseDouble(list.get(i).split(" ")[2]);
				resultList.add(" " + list.get(i).split(" ")[0] + " (C-)");
				count++;
			}
			else if ( temp.equals("D+") ){
				total = total + 1.3 * Double.parseDouble(list.get(i).split(" ")[2]);
				resultList.add(" " + list.get(i).split(" ")[0] + " (D+)");
				count++;
			}
			else if ( temp.equals("D0") ){
				total = total + 1.0 * Double.parseDouble(list.get(i).split(" ")[2]);
				resultList.add(" " + list.get(i).split(" ")[0] + " (D0)");
				count++;
			}
			else if ( temp.equals("D-") ){
				total = total + 0.7 * Double.parseDouble(list.get(i).split(" ")[2]);
				resultList.add(" " + list.get(i).split(" ")[0] + " (D-)");
				count++;
			}
			else if ( temp.equals("F") ){
				total = total + 0;
				resultList.add(" " + list.get(i).split(" ")[0] + " (F)");
				count++;
			}
			else if ( temp.equals("Pass") )
				total = total + 4.3 * Double.parseDouble(list.get(i).split(" ")[2]);
			else if ( temp.equals("Fail") ){
				total = total + 0;
				resultList.add(" " + list.get(i).split(" ")[0] + " (Fail)");
				count++;
			}
			
			average = average + Double.parseDouble(list.get(i).split(" ")[2]);
		}
		
		average = Math.round(total / average * 100.0) / 100.0;
		
		if ( average == 4.30 )
			System.out.printf("Average : %.02f (A+)\n", average);
		else if ( average >= 4.00 && average < 4.30 )
			System.out.printf("Average : %.02f (A0)\n", average);
		else if ( average >= 3.70 && average < 4.00 )
			System.out.printf("Average : %.02f (A-)\n", average);
		else if ( average >= 3.30 && average < 3.70 )
			System.out.printf("Average : %.02f (B+)\n", average);
		else if ( average >= 3.00 && average < 3.30 )
			System.out.printf("Average : %.02f (B0)\n", average);
		else if ( average >= 2.70 && average < 3.00 )
			System.out.printf("Average : %.02f (B-)\n", average);
		else if ( average >= 2.30 && average < 2.70 )
			System.out.printf("Average : %.02f (C+)\n", average);
		else if ( average >= 2.00 && average < 2.30 )
			System.out.printf("Average : %.02f (C0)\n", average);
		else if ( average >= 1.70 && average < 2.00 )
			System.out.printf("Average : %.02f (C-)\n", average);
		else if ( average >= 1.30 && average < 7.00 )
			System.out.printf("Average : %.02f (D+)\n", average);
		else if ( average >= 1.00 && average < 1.30 )
			System.out.printf("Average : %.02f (D0)\n", average);
		else if ( average >= 0.70 && average < 1.00 )
			System.out.printf("Average : %.02f (D-)\n", average);
		else if ( average >= 0.00 && average < 0.70 )
			System.out.printf("Average : %.02f (F)\n", average);
		System.out.println();//공백!
		System.out.println("RETAKE NEEDED " + "(" + resultList.size() + ")");
		
		for (int i = 0; i < resultList.size(); i++ ){
			System.out.println(resultList.get(i));
		}
	}
}

