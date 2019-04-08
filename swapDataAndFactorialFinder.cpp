#include <iostream>
#include <string>
using namespace std;

void swapdata(string& a, string& b)
{
    string c;
    c=a;
    a=b;
    b=c;
}

void swapdata(int& a, int& b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

unsigned long long int fac(int n)
{
   unsigned long long int factorial = 1;
    for(int i = 1; i <=n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
 
   //String data swap
   string d, e;
   cout << "Enter two strings: " << endl;
   cin >> d;
   cin >> e;
   swapdata(d, e);
   cout << "d is now " << d << endl;
   cout << "e is now " << e << endl << endl;
   
   //Integer data swap
   int f, g;
   cout << "Enter two integers: " << endl;
   cin >> f;
   cin >> g;
   swapdata(f, g);
   cout << "f is now " << f << endl;
   cout << "g is now " << g << endl << endl;
   
   //Factorial finder
   int x;
   cout << "Enter a positive integer x: " << endl;
   cin >> x;
   cout << x << "! is " << fac(x) << endl << endl;
   
   
    return 0;

}



