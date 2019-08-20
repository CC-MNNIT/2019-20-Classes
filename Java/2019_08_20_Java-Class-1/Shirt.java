public class Shirt {
  		String color;
		Shirt(String s){
			color = s;
}
public static void main(String[] args){

			Shirt Obj; // reference
			Obj = new Shirt("red"); 
	 		System.out.println(Obj.color);
			for(String str : args) {
				System.out.println(str);
			}	
  }
}

