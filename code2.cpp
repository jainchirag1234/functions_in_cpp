#include <iostream>
#include <conio.h>
using namespace std;

int minOfTwo(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    cout << "min=" << minOfTwo(8, 2) << endl;
    return 0;
}