
import java.io.Serializable;
import java.io.*;


class Student {
	int regno;
	String name;

	public Student(int regno, String name){
		this.regno = regno;
		this.name = name;
	}
}



public class SerializationExample{

	public static void main(String[] args){

		Student student = new Student(20184018, "Kaleen Bhaiyya");

		FileOutputStream fos = null;
		ObjectOutputStream out = null;
		
		try{

			// Opening an output stream to a file named "file.ser"
			fos = new FileOutputStream(new File("file.ser"));

			// encapsulating file output stream with object output stream.
			out = new ObjectOutputStream(fos);

			// Writing the object to the file
			out.writeObject(student);

			out.close();
			fos.close();

		}catch(Exception e){
			System.err.println("Exception occured: "+e);
		}
	}

}



