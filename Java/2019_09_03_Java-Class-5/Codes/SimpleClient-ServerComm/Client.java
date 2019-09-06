import java.io.*;
import java.net.*;
import java.util.Scanner;


public class Client{
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter server IP: ");
        String serverIP = sc.next();
        System.out.print("Enter port: ");
        int port = sc.nextInt();

        Socket sock=null;

        try{
            sock = new Socket(serverIP, port);
            System.out.println(""+sock.getInetAddress());
            System.out.println(""+sock.getPort());

            System.out.println("Connected to the server");

            DataOutputStream dos = new DataOutputStream(sock.getOutputStream());
            DataInputStream dis = new DataInputStream(sock.getInputStream());

            new Thread(new ClientHandler(sock)).start();
            
            while(true){
                String msg = sc.next();
                dos.writeUTF(msg);
            }

        }catch(Exception e){
            e.printStackTrace();
            System.out.println("Cannot connect to server...!!");
        }



    }

}


