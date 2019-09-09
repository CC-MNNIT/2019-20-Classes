package com.example.android.viewpagerexample;

import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentPagerAdapter;

/** links the view pager with the each fragment
 * returns the specified fragment of selected
 * page position
 */
public class PageAdapter extends FragmentPagerAdapter {
    private int numOfTabs;
    public PageAdapter(FragmentManager fm,int numOfTabs) {
        super(fm);
        this.numOfTabs = numOfTabs;
    }

    @Override
    public Fragment getItem(int position) {
        switch (position){
            case 0:
                return new ChatFragment();
            case 1:
                return new StatusFragment();
            case 2:
                return new CallsFragment();
        }
        return null;
    }

    /** returns count of number of
     * pages in the view pager
     *
     */
    @Override
    public int getCount() {
        return numOfTabs;
    }
}
