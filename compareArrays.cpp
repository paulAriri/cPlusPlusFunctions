#include <stdio.h>
#include <iostream>
using namespace std;

//function to compare two arrays and conclude if they have the same exact values for all elements
bool compare(int a[],int b[],int size)
{
    int first = a[0];
    int second = b[0];
    
    for(int i = 0; i<size; i=i+1)
    {
        if (a[i] != b[i] )
        {
            return false;
        }
        return true;
    }
}
            //OR

bool compare(int a[],int b[],int size)
{
    int first = a[0];
    int second = b[0];
    
    for(int i = 0; i<size; i=i+1)
    {
        if (a[i] == b[i] )
        {
            count =count+1;
        }
        if(count == size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{

    return 0;
}

