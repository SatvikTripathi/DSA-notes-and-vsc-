#include <iostream>
#include <set>
using namespace std;

// *** Set ***
// set only stored unique elements, say we store an element 4 times, but it would be stored only once
// elements are returned in sorted order

// Unordered Set --> elements are fetched in random order unlike normal sets, but these are faster

int main(){
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(int i:s){
        cout << i << " "; //will fetch only the unique values
    }cout << endl;


    

// set<int> :: iterator it = s.begin(); //placing an iterator in the beggining of the set
// it++; // will shift it to 1 from 0

//     s.erase(it);

//     for(int i:s){
//         cout << i << " ";
//     }cout << endl;

    // cout << "5 is present or not --> " << s.count(5) << endl; //.count() will check if an element is present in the set or not

    // set<int> :: iterator itr = s.find(5);

    // for(auto it = itr; it!=s.end();it++){
    //     cout << *it << " "; //calling by reference
    // }cout << endl;




    // unordered_set<int> ss;      // implemented with hashing
    // ss.insert(19);
    // ss.insert(10);
    // ss.insert(14);
    // ss.insert(15);
    
    // cout << ss.size() << endl;
    
    // for(auto x:ss){
    //     cout << x << " ";
    // }cout << endl;



    // if(ss.find(14) == ss.end()){
    //     cout << "Not found" << endl;
    // }
    // else{
    //     cout << "Found" << endl;
    // }

    // auto it = ss.find(14);

    // ss.erase(it);

    // if(ss.count(14) != 1){
    //     cout << "Not found" << endl;
    // }
    // else{
    //     cout << "Found" << endl;
    // }

    // cout << ss.size() << endl;

    return 0;
}