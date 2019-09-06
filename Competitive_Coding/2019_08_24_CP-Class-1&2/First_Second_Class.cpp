
//  To compile ---  g++ First_Second_Class.cpp

// This file contains Pair, Vector, Set, String, Map, lower_bound, upper_bound and other C++ Algorithms
// Don't memorize STL, Just practice it.

#include<bits/stdc++.h>
using namespace std;

int n = 5;

bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main() {

// STL containers

    // for STL :
    // https://www.topcoder.com/community/competitive-programming/tutorials/power-up-c-with-the-standard-template-library-part-1/
    // https://www.topcoder.com/community/competitive-programming/tutorials/power-up-c-with-the-standard-template-library-part-2/

    // for STL Containers:
    // http://www.cplusplus.com/reference/stl/

    // pair
    pair<int, int> p;
    p = make_pair(2, 3);   // will make a pair(2, 3)

    cout << p.first << ' ' << p.second << '\n';

    p = {2, 4};      // works same as make_pair(2, 4)

    cout << p.first << ' ' << p.second << endl;     // endl works same as '\n', endl is there only in C++

    pair<int, int> np(p);        // will make copy of pair p

    // To store n points on 2-D plane, use array of n pairs
    pair<int, int> points[n];

    for(int i=0; i<n; i++) {
        cin >> points[i].first >> points[i].second;
    }

    for(int i=0; i<n; i++) {
        cout << i << "th point is - " << points[i].first << ',' << points[i].second << '\n';
    }
    // what are some other ways to store n points in 2-D plane ?


    // To store n points in 3-D (x, y, z)
    pair<pair<int, int>, int> p_3D[n];
    for(int i=0; i<n; i++) {
        cin >> p_3D[i].first.first >> p_3D[i].first.second >> p_3D[i].second;
    }

    for(int i=0; i<n; i++) {
        cout << i << "th point is - " << p_3D[i].first.first << ' ' << p_3D[i].first.second << ' ' << p_3D[i].second << '\n';
    }





    // vector
    vector<int> v;         // vector with length 0
    vector<int> a(n);      // vector with n length
    vector<int> b[n];      // array of n vectors
    vector<vector<int> > c;  // vector of vector (each element of our vector is a vector itself)
    vector<int> d(n, 1);     // vector with n elements and element is initialized with 1

    int x, y;
    for(int i=0; i<n; i++) {
        cin >> x;
        v.push_back(x);   // insert x at the end of vector v,  time complexity - O(1)
    }

    a.push_back(6);   // what will be the index of 6 ?

    for(int i=0; i<n; i++) {
        cin >> x;
        a[i] = x;         // push_back is not used, why ?
    }

    for(int i=0; i<n; i++) {
        cin >> x >> y;
        b[x].push_back(y);    // pushing y at the end of xth vector, time complexity - O(1)
    }

    // What is the of array of n vectors when we can declare a n*n matrix ?

    // traversing a vector

    // traverse like a array
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << '\n';
    }

    // traverse using iterator
    vector<int>::iterator it;
    for(it=v.begin(); it!= v.end(); it++) {
        cout << *it << '\n';        // Here 'it' is iterator
    }

    // traverse using foreach loop
    for(int x : v) {
        cout << x << '\n';   // x is just a variable holding new element at each iteration of loop
    }

    for(int &x : v) {
        cout << x << '\n';   // x is now a reference holding new element at each iteration of loop
    }

    // How to get last element of a vector ?
    cout << v.back();                           // back() will give last element of vector, time complexity - O(1)

    // Read about Pointer, Iterator, References in C++

    // How to change size of a vector ?
    a.resize(2*n);        // time complexity - O(n)

    // How to clear a vector ?
    v.clear();            // time complexity - O(n)
    a.clear();
    for(int i=0; i<n; i++) b[i].clear();   // will clear each vector b[i] one by one.
    // clear will remove each element from vector and make its size 0;


    // explore more about vectors on your own

    // How to sort a vector or a array ?
    sort(v.begin(), v.end());            // will sort vector in increasing order by default, time complexity - O(nlogn)
    // read about implementation of sort function in C++

    // How to sort in decreasing order ?
    sort(v.begin(), v.end(), greater<int>());

    // How to sort our container in a specific way?
    // Write Comparator function. (read about it)

    vector<pair<int,int> > vp;
    vp.push_back({2,1});
    vp.push_back({3, 2});
    vp.push_back({2, 2});

     /*now we will sort vp in decreasing order of first element of pair,
      if first element of two pairs is same then pair with smaller second number comes first.*/
    sort(vp.begin(), vp.end(), comp);


    // String

    char ch[n];    // C-styled string
    ch[n-1] = '\0';

    string s = "hello", s_new = "world";
    s = s+s_new;
    cout << s << '\n';


    string input;
    cin >> input;     // will not take string containing spaces

    getline(cin, input);    // will take entire line as input

    int nn = s.length();  // time complexity of length is O(1), time complexity of strlen() in C is O(n)


    // traversing a string
    // same as C
    int n1 = s.length();
    for(int i=0; i<n; i++) {
        cout << s[i] << '\n';
    }

    // traverse using foreach loop
    for(char c : s) {
        cout << c << '\n';
    }


    // what is time complexity of loop L1 and loop L2 ?

    // Loop L1
    for(int i=0; i<s.length(); i++) {
        cout << s[i] << '\n';
    }

    // Loop L2
    for(int i=0; i<strlen(ch); i++) {
        cout << ch[i] << '\n';
    }


    // How to get specific substring of a string ?
    s = "helloworld";
    string temp = s.substr(0, 3);   // temp will store subtring of length 3 starting from 0th-index; , time complexity O(n)
    string temp1 = s.substr(2, 4);  // temp1 will store substring of length 4 starting from 2nd - index;
    string temp2 = s.substr(3);    // temp2 will store substring starting from 3rd index upto the end

    // How to sort a string ?

    // Use sort :)
    sort(s.begin(), s.end());   // will sort string in increasing order, time complexity - O(nlogn)

    sort(s.begin(), s.end(), greater<char>()); // will sort string in decreasing order


    // How to reverse a container ?
    // use reverse
    reverse(s.begin(), s.end());     // will reverse string s, time complexity - O(n)
    cout << s << '\n';

    reverse(v.begin(), v.end());    // will reverse vector v, time complexity - O(n)


    // Q.  Given a string of n length, find out frequency of each character in it. (Only lowercase letters will be there in string)


    // sol.
    int freq[26] = {0};
    for(char c : s) {
        freq[c-'a']++;
    }
    for(int i=0; i<26; i++) {
        cout << freq[i] << '\n';
    }






    /*Q. Given an array of n distinct elements, you have to process q queries of 3 types
            1. insert given element in array, if it is not already present
            2. delete given element from array, if present in array
            3. Print maximum and minimum element present in array

        1 <= N <= 10^5
        1 <= q <= 10^5

    */
    // sol -- use Set



    // Set
    set<int> st;

    for(int i=0; i<n; i++) {
        cin >> x;
        st.insert(x);      // set stores only distinct element in sorted order(by default)
    }

    for(int x : st) {
        cout << x << '\n';
    }

    // first element of set
    int first =  *st.begin();

    // last element of set
    int last = *(--st.end());


    // set will take only distinct element, how to store insert same element multiple times ?


    // Map

    map<char, int> mp;               // map will store key-value pairs(each key will be distinct)
    string s1  = "helloworld";
    for(int i=0; i<s1.length(); i++) {
        mp[s1[i]]++;
    }

    for(auto it : mp) {
        cout << it.first << ' ' << it.second << '\n';
    }




// STL Algorithms

    // for detailed reading (http://www.cplusplus.com/reference/algorithm/)
    // No need to learn every algorithm, Just practice!


    // min()  ---- inbuilt function
    int aa = 3, bb = 5;
    cout << min(aa, bb) << '\n';    // will give minimum of two numbers(datatype of both numbers should be same);

    // max()
    cout << max(aa, bb) << '\n';

    // swap()
    swap(aa, bb);
    cout << aa << ' ' << bb << '\n';

    // find()

        // using std::find()
        vector<int> fin;
        for(int i=1; i<=10; i++) {
            fin.push_back(i);
        }
        vector<int>::iterator find_5 = find(fin.begin(), fin.end(), 5);     // time complexity - O(n)
        if(find_5 != fin.end()) {
            cout << find_5 - fin.begin() << '\n';
        }


        // for set
        set<int> fin_set;
        for(int i=1; i<=10; i++) {
            fin_set.insert(i);
        }
        set<int>::iterator fin_5 = find(fin_set.begin(), fin_set.end(), 5);

        set<int>::iterator fin_6 = fin_set.find(5);


        // read about difference between std::find() and set::find()

    // lower_bound()

        // // read about difference between std::lower_bound() and set::lower_bound()
    // upper_bound()


    // binary_search()


    // erase()



    return 0;
}
