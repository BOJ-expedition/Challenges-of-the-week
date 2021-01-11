// https://programmers.co.kr/learn/courses/30/lessons/12969

#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    
    for (int i = 0; i < b; ++i)
    {
        for (int j = 0; j < a; ++j)
            cout << "*";
        
        cout << endl;
    }
    return 0;
}