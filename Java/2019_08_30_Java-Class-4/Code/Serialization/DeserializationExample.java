
import java.io.Serializable;
import java.io.*;


class Student implements Serializable{
	int regno;
	String name;

	public Student(int regno, String name){
		this.regno = regno;
		this.name = name;
	}
}



public class DeserializationExample{

	public static void main(String[] args){

		Student student = null;

		FileInputStream fis = null;
		ObjectInputStream ois = null;
		
		try{

			// Opening an output stream to a file named "file.ser"
			fis = new FileInputStream(new File("file.ser"));

			// encapsulating file output stream with object output stream.
			ois = new ObjectInputStream(fis);

			// Writing the object to the file
			student = (Student)ois.readObject();

			ois.close();
			fis.close();

			System.out.println("Name: "+student.name+"\n"+"Reg No.: "+student.regno);

		}catch(Exception e){
			System.err.println("Exception occured: "+e);
		}
	}

}



