#include <bits/stdc++.h>
using namespace std;

int getMax(int x,int y) // x  and y are formal parameters
{
    if(x > y)
        return x;
    else 
        return y;
}


int main()
{
    int a = 10, b = 20; //10 and 20 are actual parameters
    cout << getMax(a,b);
    return 0;
}