package com.example.firstandroidclass;

//import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.widget.Toast;
// every class in android studio extends AppCompatActivity. If you remove "extends AppCompatActivity", this will become an ordinary class
public class Main2Activity extends AppCompatActivity {
	/*annotation telling compiler that onCreate, onStart, etc. functions have been overrided from parent class (refer inheritance and polymorphism)*/
    @Override
    protected void onCreate(Bundle savedInstanceState) {
	//first execute the code of parent class version of onCreate() and then execute my own code
        super.onCreate(savedInstanceState);
	//set layout for this activity(R file contains ids of all views created and layouts)
        setContentView(R.layout.activity_main2);
	//see on screen
        Toast.makeText(getApplicationContext(),"OnCreateCalled",Toast.LENGTH_LONG).show();
	//see in logcat console
        Log.d("LifeCycle2","OnCreateCalled");
    }
    @Override
    protected void onStart() {
        super.onStart();
        Toast.makeText(getApplicationContext(),"OnStartCalled",Toast.LENGTH_LONG).show();
        Log.d("LifeCycle2","OnStartCalled");
    }

    @Override
    protected void onStop() {
        super.onStop();
        Toast.makeText(getApplicationContext(),"OnStopCalled",Toast.LENGTH_LONG).show();
        Log.d("LifeCycle2","OnStopeCalled");
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        Toast.makeText(getApplicationContext(),"OnDestroyCalled",Toast.LENGTH_LONG).show();
        Log.d("LifeCycle2","OnDestroyCalled");
    }

    @Override
    protected void onPause() {
        super.onPause();
        Toast.makeText(getApplicationContext(),"OnPauseCalled",Toast.LENGTH_LONG).show();
        Log.d("LifeCycle2","OnPauseCalled");
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        Toast.makeText(getApplicationContext(),"OnRestartCalled",Toast.LENGTH_LONG).show();
        Log.d("LifeCycle2","OnRestartCalled");
    }
    @Override
    protected void onResume() {
        super.onResume();
        Toast.makeText(getApplicationContext(),"OnResumeCalled",Toast.LENGTH_LONG).show();
        Log.d("LifeCycle2","OnResumeCalled");
    }
}
