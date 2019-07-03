import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;


public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner (System.in);
		
		HashMap<String, String> friendMap = new HashMap<String, String>();
		
		ArrayList<String> list = new ArrayList<String>();
		ArrayList<String> resultList = new ArrayList<String>();
		
		int n = sc.nextInt();
		sc.nextLine();
		
		String temp = "";
		
		for ( int i = 0; i < n; i++ ){
			temp = sc.nextLine();
			list.add(temp);
			friendMap.put(temp.split(",")[0], temp);
		}

		String friendName = sc.nextLine();
		String[] friendData = friendMap.get(friendName).split(",");
		
		for ( int i = 3; i < friendMap.get(friendName).split(",").length; i++ ){
			
			if ( !resultList.contains(friendData[i]))
				resultList.add(friendData[i]);
			
			String[] friendData2 = friendMap.get(friendData[i]).split(",");
			
			for ( int j = 3; j < friendData2.length; j++ ){
				if (!resultList.contains(friendData2[j]))
					resultList.add(friendData2[j]);
			}
		}
		

		for ( int i = 0; i < resultList.size(); i++ ){
			if ( resultList.get(i).equals(friendName) )
				resultList.remove(i);
		}
		
		System.out.println(resultList.size());
	}
}

