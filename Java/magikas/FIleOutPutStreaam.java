package com.mycompany.app;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.util.logging.Level;
import java.util.logging.Logger;

import com.sun.tools.javac.Main;

public class App {
    public static void main(String[] args) {
        System.out.println("Hello Remote World!");
        System.out.println("Hello Victor!");    
        try{

            OutputStream fos = new FileOutputStream("Readme.md");
            for(var i = 0x30;i<= 0x39; i++){
                fos.write(i);
            }
            fos.write(0x31);
            fos.flush();
            fos.close();
        }catch(FileNotFoundException ex){
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE,null,ex);
        }catch(IOException ex){
            Logger.getLogger(Main.class.getName()).log(Level.SEVERE,null,ex);
        }
    }
}