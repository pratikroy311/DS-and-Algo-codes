#include <iostream>
using namespace std;

class Array
{
    int size;
    int *arr;
    int rot;
    public:
    Array(int size,int rot)
    {
        this->size=size;
        this->rot=rot;
        arr = new int[size];
    }
    void set_array()
    {
        for(int i=0;i<size;i++)
        {
            cin >> arr[i];
        }
    }
    void rotate()
    {
        int *p;
        p =new int[rot];
        for(int i=0;i<rot;i++)
        {
            p[i] = arr[i];
        }
        for(int i=0;i<size-rot;i++)
        {
            arr[i]= arr[i+rot];
        }
        for(int i=size-rot,j=0;i<size,j<rot;i++,j++)
        {
            arr[i]=p[j];
        }
        delete []p;
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
    
};
int main() {
	//code
	int T;
	cin >>T;
	for(int i=0;i<T;i++)
	{
	    int n,r;
	    cin >> n >> r;
	    Array a(n,r);
        a.set_array();
	    a.rotate();
	    a.display();
	}
	return 0;
}