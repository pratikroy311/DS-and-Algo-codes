#include <iostream>
#include <string.h>
using namespace std;

int min(string s1,string s2,int size)
{
    int min = 0;
    for(int i=0 ; i< size ; i++)
    {
        if(s2[i]!= '?' && s1[i] != '?' && s1[i]!=s2[i])
        {
            min++;
        }
    }
    return min;
}
int max(string s1,string s2,int size)
{
    int max=0;
    for(int i=0;i< size;i++)
    {
        if(s2[i]=='?'&& s1[i]=='?'|| s1[i]!=s2[i])
        {
            max++;
        }
    }
    return max;
}

int main()
{
    string s1, s2;
    cin >> s1 >>s2;
    int size = s1.size();
    int minm = min(s1,s2,size);
    int maxm = max(s1,s2,size);
    cout << minm << endl << maxm;

}