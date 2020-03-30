#include <iostream>

using namespace std;

int binary_search(int arr[],int low ,int high,int x)
{
  
  if(high>=low)
  {
    int mid = low+((high-low)/2);
    if(x==arr[mid]){return mid;}
    else if(x<arr[mid])
    {
      return binary_search(arr,low,mid-1,x);
    }
    else if(x>arr[mid]){
      return binary_search(arr,mid+1,high,x);
    }
    
  }
  else return -1;
}

int main()
{
  int arr[]={2,5,8,34,56,78,97,114};
    int start=0,end=(sizeof(arr)/4);
    int x;
    cout << "enter the value to search: ";
    cin >> x;
    int result= binary_search(arr,start,end,x);
    (result<=-1)? cout << "\nnot found" :cout << "found at index: "<<result;

    cout << endl <<endl;
}