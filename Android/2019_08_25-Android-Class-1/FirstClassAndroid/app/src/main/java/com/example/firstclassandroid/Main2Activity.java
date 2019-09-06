package com.example.firstclassandroid;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class Main2Activity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        TextView textView=findViewById(R.id.textId);
	//get data from intent and store it in a string variable
        String message=getIntent().getExtras().getString("text");
        textView.setText("Hey "+message);
    }
}
