import java.util.*;
public class arraylistresize{
	
	public static void main(String args[]){
		
		ArrayList<String> sudha=new ArrayList<String>(3); //init size of an arraylistresize
		ArrayList<String> sudha2=new ArrayList<String>(Arrays.asList("hii","hii2","hii3")); //init size of an arraylistresize
		
		sudha.add("hey");
		sudha.add("hey2");
		sudha.add("hey3");
		sudha.add("hey3");
		sudha.add("hey3");

		
		System.out.println("array list"+sudha);
		System.out.println("array list 2"+sudha2);
		
		//cap incr
		
		//find the index of an element
		
		int lastIndex = sudha.lastIndexOf("hey3");
         
        System.out.println(lastIndex);
		
		
		sudha.ensureCapacity(500);
		System.out.println("now capacity increases");
		
		
	}
	
	
}
	