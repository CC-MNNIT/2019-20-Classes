package com.example.mylistapp;

import android.app.Activity;
import android.content.Context;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ImageView;
import android.widget.TextView;

public class MyListAdapter extends ArrayAdapter {
    String[] language;
    String[] developer;
    Integer[] image;
    Activity ctx;

    public MyListAdapter(Activity ctx, String[] language, String[] developer, Integer[] image)
    {
     super(ctx,R.layout.mylist,language);
     this.language=language;
     this.developer=developer;
     this.image=image;
     this.ctx=ctx;
    }

    @NonNull
    @Override
    public View getView(int position, @Nullable View convertView, @NonNull ViewGroup parent) {
        LayoutInflater inflater=ctx.getLayoutInflater();
        View rowView=inflater.inflate(R.layout.mylist, null,true);
        TextView languageName=rowView.findViewById(R.id.language);
        TextView developerName=rowView.findViewById(R.id.developer);
        ImageView imageView=rowView.findViewById(R.id.image);

        languageName.setText(language[position]);
        developerName.setText(developer[position]);
        imageView.setImageResource(image[position]);
        return rowView;

    }
}
