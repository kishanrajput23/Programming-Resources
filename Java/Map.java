package day4;

import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

public class mapDemo {

	public static void main(String[] args) {
		
		Map<String, String> map=new HashMap<>();
		map.put("P1", "Lemon Cake");
		map.put("P2", "Ratatouille");
		map.put("P3", "Bertie Bott's Beans");
		
		//Key cannot be duplicated, the value will be overriden	
		map.put("P3", "BlueBerry Cake");
		//Checking if map contains the specific key
		if(map.containsKey("P1")){
			System.out.println("P1 found");
		}
		else
			System.out.println("P1 not found");
		
		//Checking if map contains the specific value
		if(map.containsValue("Ratatouille"))
			System.out.println("Ratatouille is found");
			else
				System.out.println("Ratatouille not found");
		
		//Checking the size of the map
		System.out.println("Map size:"+map.size());
		
		//Retrieving the value of a map using key
		System.out.println("The value of P3 is "+map.get("P3"));
		
		//Retrieving all the keys of a map
		Set<String> keySet = map.keySet();
		
		//Display the entries in the map
		System.out.println("ItemId    ItemName");
		System.out.println("=========================");
		 for(String key : keySet){
			 System.out.println(key+"        "+map.get(key));
		 }
		 System.out.println("=========================");
		
		//Another way of displaying the entries in the map
		 System.out.println("ItemId    ItemName");
			System.out.println("=========================");
		 Set<Entry<String, String>> entrySet = map.entrySet();
		 for(Entry<String, String> entry : entrySet){
			 System.out.println(entry.getKey()+"        "+entry.getValue());
		 }
		 System.out.println("=========================");
		 //Removing one item from the map using its key
		 map.remove("P3");
		 
		 //Displaying only the values from the map
		 System.out.println("ItemName in the map are");
		 System.out.println("=========================");
		 Collection<String> values = map.values();
		 for(String val : values){
			 System.out.println(val);
		 }
		 System.out.println("=========================");
		 //Removing all the items from the map
		 map.clear();
		 
		 
		 //Checking the map is empty or not
		 if(map.isEmpty()){
			 System.out.println("No items found");
		 }		

	}

}
