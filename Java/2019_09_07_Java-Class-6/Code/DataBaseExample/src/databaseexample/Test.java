/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package databaseexample;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

/**
 *
 * @author aks
 */
public class Test {
    
    public static void main(String[] args) {
        try{
            
            ProcessBuilder ps = new ProcessBuilder("/home/aks/Desktop/Java/a.out");
            ps.redirectErrorStream(true);
            String s="";
            Process process = ps.start();
            BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(process.getOutputStream()));
            writer.write(s, 0, s.length());
            writer.newLine();
            writer.close();
            
        }catch(Exception e){
            e.printStackTrace();
        }
    
    }
    
}
