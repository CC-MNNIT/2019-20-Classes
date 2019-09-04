package com.example.android.firebaseexample;

public class Employee {
    public String name,number,state,country;
    public int age;

    // Important !!
    public Employee() {

    }

    public Employee(String name, int age,String number,String state,String country) {
        this.name = name;
        this.age = age;
        this.country=country;
        this.state=state;
        this.number=number;
    }
}
