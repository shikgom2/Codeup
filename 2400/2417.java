import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;
public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner (System.in);
		
		HashMap<String, Integer> hashMap = new HashMap<>();
		
		int n = sc.nextInt();
		sc.nextLine();
		
		String temp = "";

		ArrayList<String> list = new ArrayList<String>();
		ArrayList<String> resultList = new ArrayList<String>();
		int valueTemp = 0;
		int max = 0;
		for ( int i = 0; i < n; i++ ){
			temp = sc.nextLine();
			list.add(temp);
		}
		for ( int i = 0; i < n; i++ ){
			for ( int j = 3; j < list.get(i).split(",").length; j++ ){
				if ( hashMap.containsKey(list.get(i).split(",")[j]) ){
					valueTemp = hashMap.get(list.get(i).split(",")[j]);
					hashMap.remove(list.get(i).split(",")[j]);
					hashMap.put(list.get(i).split(",")[j], valueTemp+1);
				} else { 
					hashMap.put(list.get(i).split(",")[j], 0);
				}
			}
		}
		
		for(Integer value: hashMap.values()){
			if ( max < value )
				max = value;
		}
		
		for(String key: hashMap.keySet()){
			if ( max == hashMap.get(key) )
				resultList.add(key);
		}
		Collections.sort(resultList);
		for(int i = 0; i < resultList.size(); i++){
			System.out.println(resultList.get(i));
		}
	}
}


