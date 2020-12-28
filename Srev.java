import java.util.*;

class Srev{

	public static String rev(String s){
		return new StringBuilder(s).reverse().toString();
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		sc.close();
		String[] words = s.split("\\s");
		String res = rev(words[0]);
		int len = words.length;
		for(int i = 1; i < len; i++){
			res = res +" "+ rev(words[i]);
		}
		System.out.println(res);
	}
}
