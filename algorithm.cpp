#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // Binary Search --> only works on sorted arrays
    cout << "Finding 6 --> " << binary_search(v.begin(), v.end(),6) << endl;

    // upper and lower bound
    cout << "Upper Bound: " << upper_bound(v.begin(), v.end(), 1) - v.begin() << endl;
    cout << "Lower Bound: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "max: " << max(a, b) << endl;
    cout << "Min: " << min(a, b) << endl;

    swap(a,b);

    cout << endl << "a--> " << a << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "reversed string s--> " << s << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    sort(v.begin(), v.end()); //based on IntroSort or Introspective sort

    cout << "After sort: "<< endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;


    return 0;
}