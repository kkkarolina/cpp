#include<iostream>
#include<math.h>
using namespace std;
float a,b,c,x,d,x1,x2;
int main()
{
    cout<<"Podaj wspolczynnik a: ";
    cin>>a;
    cout<<"Podaj wspolczynnik b: ";
    cin>>b;
    cout<<"Podaj wspolczynnik c: ";
    cin>>c;
    cout<<a<<"x^2+"<<b<<"x+"<<c<<"=0"<<endl;
    if (a==0)
    {
        x=(-c)/b;
        cout<<"x="<<x;
    }
    else
    {
        d=b*b-4*a*c;
        //cout<<d;
        if (d>0)
        {
            x1=(-b-sqrt(d))/2*a;
            x2=(-b+sqrt(d))/2*a;
            cout<<"x1="<<x1<<" x2="<<x2;
        }
        if (d==0)
        {
            x=-b/2*a;
            cout<<"x="<<x;
        }
        else if(d<0)
        {
            cout<<"Brak rozwiazan"<<endl;
        }
    }
    
        return 0;
}

