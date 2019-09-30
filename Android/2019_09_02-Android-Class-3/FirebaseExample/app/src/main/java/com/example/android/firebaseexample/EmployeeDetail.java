package com.example.android.firebaseexample;

import android.support.annotation.NonNull;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

public class EmployeeDetail extends AppCompatActivity {
    public TextView nameText,ageText,numberText,stateText,countryText;
    public Button getButton;
    public String name="",number,state,country;

    public int age=0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_employee_detail);

        nameText = (TextView )findViewById(R.id.name);
        ageText = (TextView)findViewById(R.id.age);
        getButton = (Button)findViewById(R.id.getbt);
        numberText=(TextView) findViewById(R.id.number);
        stateText=(TextView) findViewById(R.id.state);
        countryText=(TextView)findViewById(R.id.country);

        FirebaseDatabase database = FirebaseDatabase.getInstance();
        final DatabaseReference myRef = database.getReference("employee");

        getButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                myRef.child("employee1")
                        .addListenerForSingleValueEvent(new ValueEventListener() {
                            @Override
                            public void onDataChange(@NonNull DataSnapshot dataSnapshot) {
                                Employee employee = dataSnapshot.getValue(Employee.class);
                                name = employee.name;
                                age = employee.age;
                                nameText.setText(name);
                                ageText.setText(String.valueOf(age));
                                numberText.setText(employee.number);
                                stateText.setText(employee.state);
                                countryText.setText(employee.country);
                            }

                            @Override
                            public void onCancelled(@NonNull DatabaseError databaseError) {

                            }
                        });
            }
        });
    }
}
