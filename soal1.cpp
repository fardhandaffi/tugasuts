#include <iostream>

using namespace std;
int main ()
{
    int x,y,a,b,progres;
    cout << " masukan bilangan A : ";
    cin >>a;
    cout << " masukan bilangan B : ";
    cin >>b;
    progres=true;
    x=a;
    y=b;

    while (progres)
{
    if (x!=y)
    {
        if (x!=y)
        {
            x=x+a;
        }
        else
        {
            y=y+b;
        }
    }
    else
    {
        progres=false;
    }

}
    cout << x;

}
