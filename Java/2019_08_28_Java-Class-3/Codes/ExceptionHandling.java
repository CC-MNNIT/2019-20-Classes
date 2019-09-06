import java.util.*;

public class ExceptionHandling{

    public static void main(String[] args){
        // try block tries to run the code in its block
        try{
            Scanner sc = new Scanner(System.in);
            int a = sc.nextInt();
            System.out.println("The input number is "+a);
        }catch(Exception e){ // Catches any exception if occurs
            System.out.println("Exception occured..!!");
        }
        finally{  // Executes no matter what
            System.out.println("This is the final block");
        }
    }

}