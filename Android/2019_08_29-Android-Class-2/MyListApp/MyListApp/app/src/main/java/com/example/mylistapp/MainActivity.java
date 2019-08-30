package com.example.mylistapp;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    ListView listView;
    String[] language={"C","C++","Java","Python","JavaScript"};
    String[] developer={"Dennis M. Ritchie","Bjarne Stroustrup","James Gosling","Guido van Rossum","Brendan Eich"};
    Integer[] imageID={R.drawable.c,R.drawable.cpp,R.drawable.java,R.drawable.python,R.drawable.javascript};



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        listView=findViewById(R.id.list);
        MyListAdapter myListAdapter=new MyListAdapter(this,language,developer,imageID);
        listView.setAdapter(myListAdapter);
        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Toast.makeText(getApplicationContext(), "You have selected "+parent.getItemAtPosition(position),Toast.LENGTH_SHORT).show();
            }
        });

    }
}
