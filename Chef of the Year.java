//http://www.codechef.com/JAN13/problems/CVOTE/

import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;
 
class bex{		
	public static void main(String[] args){
		String ch = null,coun=null;
		Scanner a  = new Scanner(System.in);
		int n = a.nextInt();
		int m = a.nextInt();
		HashMap<String,String> ma = new HashMap<String,String>();
		HashMap<String,Integer> chef = new HashMap<String,Integer>();
		HashMap<String,Integer> country = new HashMap<String,Integer>();
		
		while(n>0){
			ch = a.next();
			coun = a.next();
			ma.put(ch,coun);
			country.put(coun,0);
			
			n--;
		}
		while(m>0){
			ch = a.next();
			if(chef.containsKey(ch)){
				chef.put(ch,chef.get(ch)+1);
			}else{
				chef.put(ch,1);
			}
			String c = ma.get(ch);
			country.put(c,country.get(c)+1);
			m--;
		}
		int maxValueInMap=(Collections.max(country.values()));
		int fg=0;String en = null;
        for (java.util.Map.Entry<String, Integer> entry : country.entrySet()) {  
            if (entry.getValue()==maxValueInMap) {
               if(fg>0){
            	   if(entry.getKey().compareTo(en)<0){
            		   en = entry.getKey();
            	   }
               }else{
               	en = entry.getKey();
                  fg++;   
               }
            	
            }
        }System.out.println(en);
        maxValueInMap=(Collections.max(chef.values()));
		fg=0;en = null;
        for (java.util.Map.Entry<String, Integer> entry : chef.entrySet()) {  
            if (entry.getValue()==maxValueInMap) {
               if(fg>0){
            	   if(entry.getKey().compareTo(en)<0){
            		   en = entry.getKey();
            	   }
               }else{
               	en = entry.getKey();
                  fg++;   
               }
            	
            }
        }
		System.out.println(en);
	}
 
} 