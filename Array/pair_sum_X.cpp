//Given an array of integers, find all pairs in array
//whos sum is a given no
//example:: input:- A: 2,7,4,1,9,5 ;sum: 6
//output: 2,4 and 1,5
// time complexity is O(n^2)

#include <iostream>
using namespace std;

int pairSum(int arr[],int sum,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(arr[i]+arr[j] == sum)
            {
                cout<< "the pair is : " << arr[i] << "," << arr[j]<<endl;
            }
        }
        
    }
}
int pairSumHash(int arr[],int sum,int size)
{
    int hash[10]= {0};
    int temp;
    for(int i=0;i<size;i++)
    {
        temp = sum - arr[i];
        if(temp>=0 && hash[temp] == 1)
        {
            cout<< "the pair is : " << arr[i] << "," << temp<<endl;
        }
        
        hash[arr[i]]==1;
    }
}

int main()
{
    int size,sum;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
    cin >> sum;
    pairSum(arr,sum,size);

}