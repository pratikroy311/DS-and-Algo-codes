#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    char name[10];
    cin >> name;
    int size = strlen(name);
    int chr[256]={0};

    for(int i=0;i<size;i++)
    {
        if(int(name[i])!=0)
        {
            chr[int(name[i])]+=1;
        }
    }
    for(int i=0;i<256;i++)
    {
        if(chr[i]!=0){
        cout<< (char)i << " = " << chr[i] << endl;}
    }


}