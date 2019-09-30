/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package databaseconnection;

import java.sql.Connection;
import java.sql.DriverManager;

/**
 *
 * @author aks
 */
public class DbConnection {
        public static Connection conn = null;
    
        
     public static Connection establishConnection(){
        try{
            Class.forName("com.mysql.jdbc.Driver");
            conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/<Name_of_Database>","<username>","<password>");
        }catch (Exception e){
            e.printStackTrace();  
        }
        finally{
            return conn;
        }
    }
}
