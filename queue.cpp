#include <iostream>
#include <queue>
using namespace std;

// *** Queue, container adaptors ***
// FIFO --> First In First Out

int main(){
    queue<string> q;

    q.push("KANG");
    q.push("CHAN");
    q.push("GOB");

    cout << "First element: " << q.front() << endl;

    cout << "Last Element: " << q.back() << endl;

    cout << "Size before pop: " << q.size() << endl;

    q.pop();

    cout << "First element: " << q.front() << endl; 

    cout << "Size after pop: " << q.size() << endl;

    return 0;
}