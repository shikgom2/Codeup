
import java.util.Arrays;
import java.util.Scanner;

class Result implements Comparable<Result>{
	public String string;
	public int value;
	
	public Result(String string, int value){
		this.string = string;
		this.value = value;
	}
	
	@Override
	public int compareTo(Result o) {
		return o.value - this.value;
	}
}
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		Result[] result = new Result[n];
		
		sc.nextLine();
		
		int total = 0;

		for ( int i = 0; i < n; i++ ){
			String temp = sc.nextLine();
			for ( int j = 0; j < temp.length(); j++ ){
				total = total + (int)(Character.getNumericValue(temp.charAt(j)) * Math.pow(30, temp.length()-j-1));
			}
			result[i] = new Result(temp, total);

			total = 0;
		}
		
		Arrays.sort(result);
		
		for ( int i = 0; i < result.length; i++ ){
			System.out.print(result[i].string + " ");
		}
	}
}
