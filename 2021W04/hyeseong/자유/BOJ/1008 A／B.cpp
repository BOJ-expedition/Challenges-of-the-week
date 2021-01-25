// https://www.acmicpc.net/source/25674924

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    double A = 0.0f, B = 0.0f;
    cin >> A >> B;
    
    cout << setprecision(32) << A / B;
    
    return 0;
}