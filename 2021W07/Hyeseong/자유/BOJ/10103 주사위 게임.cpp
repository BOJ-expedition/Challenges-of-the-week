// https://www.acmicpc.net/source/26610483

#include <iostream>
using namespace std;

int main(void)
{
    int sa = 100, sb = 100;
    
    int n;
    cin >> n;

    while (n--)
    {
        static int a, b;
        cin >> a >> b;

        if (a > b)
            sb -= a;

        else if (a < b)
            sa -= b;
    }

    cout << sa << "\n" << sb << endl;

    return 0;
}