// #include <iostream>
// #include <map>
#include <bits/stdc++.h>
using namespace std;

// *** Maps ***
/* 
1. Data is stored in key value pairs
2. Keys are always unique and can only point at one value
3. A number of keys can point at the same value
4. Maps are also sorted automatcially, unordered maps are not
*/

int main(){
    map<int, string> m;

    m[1] = "Kang";
    m[13] = "GOB";
    m[2] = "Chan";

    m.insert({5, "BlackField"});

    cout << "Before Erase: " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 13: " << m.count(13) << endl;
    cout << "-Finding 13: " << m.count(-13) << endl;


    m.erase(13);
    cout << "After Erase: " << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl;

    auto it = m.find(2);

    for(auto i = it; i!=m.end();i++){
        cout << (*i).first << " " << (*i).second;
    }cout << endl;

    cout << "\n \n";

    cout << "unordered map" << endl;
    

    unordered_map<string, int> mpp;

    mpp["gfg"] = 20;
    mpp["ide"] = 30;
    mpp.insert({"courses", 15});

    for(auto x:mpp){
        cout << x.first << " " << x.second << endl;
    }

    if(mpp.find("ide") != mpp.end()){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }

    auto ite = mpp.find("courses");

    if(ite != mpp.end()){
        cout << ite -> second << endl;
    }

    for(auto iter = mpp.begin(); iter != mpp.end(); iter++){
        cout << iter -> first << " " << iter -> second << endl;
    }

    if(mpp.count("ide") > 0){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }

    cout << mpp.size() << endl;

    mpp.erase(mpp.begin());
    mpp.erase("courses");
    mpp.erase(mpp.begin, mpp.end());

    cout << mpp.size << endl;


    return 0;
}