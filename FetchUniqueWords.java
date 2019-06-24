import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.*;

public class FetchUniqueWords {
	
	public static List<String> fetchUniqueWords(String paragraph, int mode){
		
		List<String> ListStr = new ArrayList<String>();
		Set<String> S = new HashSet<String>(); 
		
		String str[] = paragraph.split(" ");
		if(mode == 1){
			for(int i=0;i<str.length;i++){
				ListStr.add(str[i]);
			}
			Collections.sort(ListStr);
			S.addAll(ListStr);
			ListStr.clear();
			ListStr.addAll(S);
			Collections.sort(ListStr);
		}
		else if(mode == 2){
			for(int i=0;i<str.length;i++){
				ListStr.add(str[i]);
			}
			Collections.sort(ListStr);
			for(int i=0;i<ListStr.size();i++){
				str[i]=ListStr.get(i);
			}
			Arrays.sort(str, new java.util.Comparator<String>() {
			    @Override
			    public int compare(String s1, String s2) {
			        return s1.length() - s2.length();
			    }
			});
			Map<String, Boolean> Map = new HashMap<>();
			ListStr.clear();
			for(int i=0;i<str.length;i++){
				if(Map.containsKey(str[i]))
					continue;
				ListStr.add(str[i]);
				Map.put(str[i], true);
			}
		}
		
		return ListStr;
	}
	
	public static void main(String args[]){
		
		Scanner kb = new Scanner(System.in);
		String str = kb.nextLine();
		
		int n = kb.nextInt();
		
		str=(str.replaceAll("([^a-zA-Z]|\\s)+", " "));
		
		List<String> ListStr;
		
		ListStr = fetchUniqueWords(str,n);
		
		System.out.println(ListStr);
	}
}

