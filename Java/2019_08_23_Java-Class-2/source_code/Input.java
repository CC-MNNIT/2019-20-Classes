import java.util.*;
import java.io.*;

class Input {
   public static void main(String[] args) throws IOException {
   	//method 1
   	Scanner input = new Scanner(System.in);
   	
   	System.out.print("Enter an integer: ");
   	int number = input.nextInt();
   	System.out.println("You entered " + number);







	//method 2
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
        

System.out.println("Enter an integer"); 
        
int a = Integer.parseInt(br.readLine());
	
System.out.printf("You have entered:- " + a); 
   }
}


