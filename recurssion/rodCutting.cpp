#include <bits/stdc++.h>

using namespace std;
int maxof(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>a && b>c)
    return b;
    else
    {
        return c;
    }
    
}
int rodCutting(int n,int a,int b,int c)
{
    if(n==0)return 0;
    if(n<0) return -1;
    int res = maxof(rodCutting(n-a,a,b,c),rodCutting(n-b,a,b,c),rodCutting(n-c,a,b,c));
    if(res == -1)
    return -1;
    return res+1;
}


int main() {
   int n = 9;
   int a = 2, b = 2, c = 2;
   cout << rodCutting(n, a, b, c);
   return 0;
}