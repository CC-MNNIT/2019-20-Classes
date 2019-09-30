import java.io.*;
import java.net.*;


public class ClientHandler implements Runnable{
    private Socket sock;
    DataInputStream dis;

    ClientHandler(Socket sock){
        this.sock = sock;
    }



    public void run(){

        try{
            dis = new DataInputStream(sock.getInputStream());

            while(true){
                System.out.println("Received message: "+ dis.readUTF());
            }

        }catch(Exception e){
            e.printStackTrace();
            System.out.println("Some error occured");
        }
        
        



    }

}