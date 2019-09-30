import java.net.*;
import java.io.*;


public class Server{
    private final static int port = 8888;

    public static void main(String args[]){
        ServerSocket ssock = null;
        try{

            ssock = new ServerSocket(port);

        }catch(Exception e){
            e.printStackTrace();
            System.out.println("Error occured...failed to initialize Server Socket");
        }

        while(true){
            Socket sock = null;
            try{
            	System.out.println("Waiting for conneection..!!");
                sock = ssock.accept();
                System.out.println("Port: "+sock.getPort());
                System.out.println("Connection received...!!!");
               new Thread(new ClientHandler(sock)).start();

            }catch(Exception e){
                e.printStackTrace();
                System.out.println("Failed to connect to client..!!");
            }

        }

        

    }

}

