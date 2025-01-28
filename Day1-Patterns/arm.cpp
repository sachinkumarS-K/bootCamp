#include <iostream>
#include <math.h>
using namespace std;
int countdig(int n)
{
    int temp = 0;
    while (n > 0)
    {
        n /= 10;
        temp++;
    }
    return temp;
}
int main()
{
    int n;
    cin >> n;
    int res = 0,temp;

    int a=countdig(n);
    while (n > 0)
    {
       temp = n % 10;
        res = res +pow(temp,a);
        n /= 10;
    }
    cout<<res<<endl;
}