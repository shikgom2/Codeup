import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int x, y;
		int result = 0;
		
		int[][] array = new int[n][n];
		
		for ( int i = 0; i < n; i++ ){
			for ( int j = 0; j < n; j++ ){
				array[i][j] = sc.nextInt();
			}
		}
		
		int count = sc.nextInt();
		
		for ( int i = 0; i < count; i++ ){
			x = sc.nextInt();
			y = sc.nextInt();
			
			try{ array[x-2][y-2] = 0; }catch(Exception e){}	
			try{ array[x-1][y-2] = 0; }catch(Exception e){}	
			try{ array[x][y-2] = 0; }catch(Exception e){}	
			try{ array[x-2][y-1] = 0; }catch(Exception e){}	
			try{ array[x-1][y-1] = 0; }catch(Exception e){}	
			try{ array[x][y-1] = 0; }catch(Exception e){}	
			try{ array[x-2][y] = 0; }catch(Exception e){}	
			try{ array[x-1][y] = 0; }catch(Exception e){}	
			try{ array[x][y] = 0; }catch(Exception e){}	
		}
		
		for ( int i = 0; i < n; i++ ){
			for ( int j = 0; j < n; j++ ){
				result = result + array[i][j];
			}
		}
		
		System.out.print(result);
	}
}

