import java.util.Scanner;
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		for ( int i = 0; i < n; i++ ){
			String temp = sc.nextLine();
			String[] array = temp.split("\\+");
			String diffResult = "";
			String inteResult = "";
			for ( int j = 0; j < array.length; j++ ){
				int a = Integer.parseInt(array[j].charAt(array[j].indexOf("*")-1) + "");
				int b = Integer.parseInt(array[j].charAt(array[j].indexOf("^")+1) + "");
				
				String temp2 = (a * b) + "*x^" + (b-1);
				String temp3 = (a/(b+1)) + "*x^" + (b+1);
				
				if (j+1 == array.length)
					diffResult = diffResult + temp2;
				else
					diffResult = diffResult + temp2 + "+";
				
				if (j+1 == array.length)
					inteResult = inteResult + temp3 + "+c";
				else
					inteResult = inteResult + temp3 + "+";
			}
			System.out.println(diffResult + " " + inteResult);
		}
	}
}

