package com.example.firstclassandroid;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
	// references of type "Edittext" and "Button"
    EditText editText;
    Button button;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

	/* find the "view" using id saved in R class and type-cast it to particular view and store this type-casted view in corresponding reference variable*/
        editText=(EditText) findViewById(R.id.edit_text);
        button=(Button) findViewById(R.id.button_xml);

//        editText.setText("Utsi Gawd");
//button is an object of class "Button" having function which listens to click on a separate thread(google this term!!)
// anonymous class usage inside listener
        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                String message=editText.getText().toString();
                Toast.makeText(MainActivity.this
                        ,message,Toast.LENGTH_LONG).show();
		// Intent used to transfer data from one activity(here MainActivity) to other activity (here Main2Activity)
                Intent intent=new Intent(MainActivity.this,
                        Main2Activity.class);
		//put data in intent and start the other activity on button click
                intent.putExtra("text",message);
                startActivity(intent);

            }
        });

    }

}
