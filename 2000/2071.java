import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

public class Main {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n, y, m, d;
		n = sc.nextInt();
		y = sc.nextInt();
		m = sc.nextInt();
		d = sc.nextInt();
		try{
			System.out.println("\"Mathemagic!\"");
			System.out.println(n*n);
			System.out.println(getDateDay(y + "-" + m + "-" + d, "yyyy-MM-dd"));
		}catch(Exception e){
		}
	}
	public static String getDateDay(String date, String dateType) throws Exception {
	    String day = "";
	    SimpleDateFormat dateFormat = new SimpleDateFormat(dateType);
	    Date nDate = dateFormat.parse(date);
	    Calendar cal = Calendar.getInstance();
	    cal.setTime(nDate);
	    int dayNum = cal.get(Calendar.DAY_OF_WEEK);     
	    switch(dayNum){
	        case 1:
	            day = "Sunday";
	            break;
	        case 2:
	            day = "Monday";
	            break;
	        case 3:
	            day = "Tuesday";
	            break;
	        case 4:
	            day = "Wednesday";
	            break;
	        case 5:
	            day = "Thursday";
	            break;
	        case 6:
	            day = "Friday";
	            break;
	        case 7:
	            day = "Saturday";
	            break;
	    }
	    return day;
	}
}


