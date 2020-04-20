#include <iostream>
#include <string.h>
using namespace std;

void remove_middle(char name[10],int mid,int size)
{
  for(int i=mid; i<size;i++)
  {
      name[i]= name[i+1];
  }
  cout << name;
}
int main()
{
    char name[10];
    cin >> name;
    int size =strlen(name);
    int mid= size/2;
    remove_middle(name,mid,size);
}