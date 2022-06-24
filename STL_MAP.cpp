#include<bits/stdc++.h>

using namespace std;
//map<datatype1, datatype2> a
// add a key-value
int main(){
    //declare a map
    map<int,int>mp;

    //initialize a map key-value
    mp[100] = 200; // (100,200)
    mp[200] = 300; //(200,300)
    mp.insert({300,400});
    mp.insert({400,500});

    //get the size of a map
    cout << mp.size() << endl;
    mp[100] = 300;
    cout << mp.size() << endl;

    //traverse a map using pair
    for (pair<int, int>x : mp){
            cout << x.first << "," << x.second << endl;
    }

    //traverse a map using auto
    for (auto it :mp){
        cout << it.first << " , " << it.second << endl;
    }


    // traverse a map using iterator
    for (map <int, int> :: iterator it = mp.begin(); it!= mp.end(); it ++){
        cout << (*it).first << "  ,  " << (*it).second << endl;
    }

    // using count to find the occurence of a key. The complexity is O(logn)
    if (mp.count(100)!= 0){
        cout << mp[100] << endl;
    }

    // using find to find the occurence of a key. The comllexity is O(logn)
    if (mp.find(100) != mp.end()){
        cout << mp[100] << endl;
    }

    // erase a key-value
    mp.erase(100);
    for (pair<int, int>x : mp){
            cout << x.first << "," << x.second << endl;
    }

    /*Count the occurences of one element in an array
    8
    1 1 2 4 1 8
    Output
    1 3
    2 1
    4 1
    8 1
    */

  /*  int n;cin >> n;
    map<int, int> mp1;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        mp1[x] ++;
    }
    for (auto it : mp1){
        cout << it.first <<"," << it.second << endl;
    }*/

    /* find maximum occurring string in a sentence (the most frequent string)
    7
    python java c++ sql java sql java

    int n1;cin >> n1;
    map<string, int> mp2;
    for (int i = 0; i < n1; i ++){
        string s;
        cin >> s;
        mp2[s] ++;
    }
       int max_fre = 0;
    string res;
    for (auto it : mp2){
        //cout << it.first << "," << it.second << endl;
        if (it.second > max_fre){
            max_fre = it.second;
            res = it.first;
        }

    }
    cout << res << "," << max_fre << endl;
    */

    //using multimap
    multimap<int, int> mp3;
    mp3.insert({100,200});
    mp3.insert({200, 300});
    mp3.insert({300,400});

    for (auto it: mp3){
        cout << it.first <<"," << it.second << endl;

    }














return 0;
}
