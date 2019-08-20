public class Dog { 

    // Instance Variables 
    String name; 
    int age;  
  
    public void setName(String name) { 
        this.name = name; 
    } 

    public String getName() { 
        return name; 
    } 
   
    public void setAge(int age) { 
        this.age = age; 
    }

    public int getAge() { 
        return age; 
    } 
  
    @Override
    public String toString(){ 

        return("Hi my name is "+ this.getName()+ 
               " and age is" + this.getAge()); 
    } 
  
    public static void main(String[] args){ 

        Dog tuffy = new Dog(); 
	tuffy.setName("tom");
        tuffy.setAge(5);
        System.out.println(tuffy.toString()); 
    } 
} 
