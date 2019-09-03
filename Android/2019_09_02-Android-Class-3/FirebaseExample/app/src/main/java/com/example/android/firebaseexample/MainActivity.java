package com.example.android.firebaseexample;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import com.google.firebase.FirebaseApp;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

public class MainActivity extends AppCompatActivity {
    public EditText nameText,ageText,numberText,stateText,countryText;
    public Button submitBt;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        // Write a message to the database

        nameText = (EditText) findViewById(R.id.naemText);
        ageText = (EditText)findViewById(R.id.ageText);
        submitBt = (Button)findViewById(R.id.submitbt);
        numberText=(EditText) findViewById(R.id.number);
        stateText=(EditText) findViewById(R.id.state);
        countryText=(EditText)findViewById(R.id.country);

        FirebaseDatabase database = FirebaseDatabase.getInstance();
        final DatabaseReference myRef = database.getReference("employee");


        submitBt.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = nameText.getText().toString();
                String number=numberText.getText().toString();
                String state=stateText.getText().toString();
                String country =countryText.getText().toString();
                int age = Integer.parseInt(ageText.getText().toString());
                Employee employee = new Employee(name,age,number,state,country);
                myRef.child("employee1").setValue(employee);

                Intent intent = new Intent(MainActivity.this,EmployeeDetail.class);
                startActivity(intent);
            }
        });
    }
}
