// https://www.acmicpc.net/source/24702306

#include <iostream>
using namespace std;

int main(void)
{
    int r1 = 0, s = 0;    
    cin >> r1 >> s;
    
    cout << s + (s - r1);
    
    return 0;
}