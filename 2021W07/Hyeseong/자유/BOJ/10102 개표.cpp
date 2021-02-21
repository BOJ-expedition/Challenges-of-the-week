// https://www.acmicpc.net/source/26610441


#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int a = 0, b = 0;

    while (n--)
    {
        static char v = '0';
        cin >> v;

        if (v == 'A')
            ++a;

        else
            ++b;
    }

    if (a > b)
        cout << "A";

    else if (a < b)
        cout << "B";

    else
        cout << "Tie";

    return 0;
}