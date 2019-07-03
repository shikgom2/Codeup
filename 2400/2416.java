import java.util.ArrayList;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner (System.in);
		
		int n = sc.nextInt();
		sc.nextLine();
		
		String temp = "";
		String tempFriend = "";
		
		String friendName = "";
		ArrayList<String> list = new ArrayList<String>();
		int maleFriend = 0;
		int femaleFriend = 0;
			for ( int i = 0; i < n; i++ ){
			temp = sc.nextLine();
			list.add(temp);
		}
		friendName = sc.nextLine();
		for ( int i = 0; i < n; i++ ){
			if(friendName.equals(list.get(i).split(",")[0])){
				for( int j = 3; j < list.get(i).split(",").length; j++ ){
					tempFriend = list.get(i).split(",")[j];
					for ( int k = 0; k < n; k++ ){
						if(tempFriend.equals(list.get(k).split(",")[0])){
							if(list.get(k).split(",")[1].equals("F"))
								femaleFriend++;
							else
								maleFriend++;
						}
					}
				}
			}
		}
		System.out.println(maleFriend);
		System.out.println(femaleFriend);
	}
}

