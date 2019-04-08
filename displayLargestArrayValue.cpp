#include <iostream>
using namespace std;
//function to display the largest value in an array
int big(int a[], int size)
{
    int max = a[0];
    for(int i=0; i<size; i=i+1)
    {
        if(a[i] > max)
        {
            max=a[i];
        }
    }
    return max;
}

int main()
{
    int x[3];
    x[0]=13;
    x[1]=34;
    x[2]=30;
    
    cout << "The biggest value in the array is " << big(x,3)<< endl;
    return 0;
}

