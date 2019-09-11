package com.example.android.jsonexample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class MainActivity extends AppCompatActivity {
    public String jsonData = "{\n" +
            "  \"first_name\": \"Rajeev\",\n" +
            "  \"last_name\": \"Sharma\",\n" +
            "  \"email_address\": \"rajeev@ezeelive.com\",\n" +
            "  \"is_alive\": true,\n" +
            "  \"age\": 30,\n" +
            "  \"height_cm\": 185.2,\n" +
            "  \"billing_address\": {\n" +
            "    \"address\": \"502, Main Market, Evershine City, Evershine, Vasai East\",\n" +
            "    \"city\": \"Vasai Raod, Palghar\",\n" +
            "    \"state\": \"Maharashtra\",\n" +
            "    \"postal_code\": \"401208\"\n" +
            "  },\n" +
            "  \"shipping_address\": {\n" +
            "    \"address\": \"Ezeelive Technologies, A-4, Stattion Road, Oripada, Dahisar East\",\n" +
            "    \"city\": \"Mumbai\",\n" +
            "    \"state\": \"Maharashtra\",\n" +
            "    \"postal_code\": \"400058\"\n" +
            "  },\n" +
            "  \"phone_numbers\": [\n" +
            "   {\n" +
            "   \"type\": \"home\",\n" +
            "   \"number\": \"9975666694\"\n" +
            "   },\n" +
            "   {\n" +
            "   \"type\": \"office\",\n" +
            "   \"number\": \"9822117730\"\n" +
            "   }\n" +
            " ],\n" +
            " \"date_of_birth\": null\n" +
            "}";
    public TextView textView1;
    public TextView textView2;
    public TextView textView3;
    public String name,address;
    public int phoneNumbers;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        textView1 = (TextView) findViewById(R.id.text1);
        textView2 = (TextView) findViewById(R.id.text2);
        textView3 = (TextView)findViewById(R.id.text3);


        try {
            JSONObject jsonObject = new JSONObject(jsonData);
            name = jsonObject.getString("first_name")+" "+jsonObject.getString("last_name");
            Log.e("name",name);
            JSONObject jsonAddress = jsonObject.getJSONObject("billing_address");
            address =jsonAddress.getString("address");
            Log.e("address",address);
            JSONArray jsonPhone = jsonObject.getJSONArray("phone_numbers");
            JSONObject jsonPhoneObj = jsonPhone.getJSONObject(0);
            phoneNumbers = jsonPhoneObj.getInt("number");
            Log.e("phone",String.valueOf(phoneNumbers));

            textView1.setText(name);
            textView2.setText(address);
            textView3.setText(String.valueOf(phoneNumbers));




        } catch (JSONException e) {
            e.printStackTrace();
        }


    }
}
