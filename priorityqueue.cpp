#include <iostream>
#include <queue>
using namespace std;

// *** Priority Queue ***
// automatically sorts its element
// by defaut the first element is the greatest, max heap

int main(){
    // max heap
    priority_queue<int> maxh;
    

    // min heap
    priority_queue<int, vector<int>, greater<int> > minh;

    maxh.push(9);
    maxh.push(4);
    maxh.push(8);
    maxh.push(2);
    maxh.push(1);

    cout << maxh.size() << endl;
    int n = maxh.size();
    for(int i = 0; i < n; i++){
        cout << maxh.top() << " ";
        maxh.pop();
    }cout << endl;

    minh.push(5);
    minh.push(1);
    minh.push(0);
    minh.push(4);
    minh.push(3);

    int m = minh.size();
    for(int i = 0; i < m; i++){
        cout << minh.top() << " ";
        minh.pop();
    }cout << endl;

    cout << "Khaali hai kya bhai: " << minh.empty();




}