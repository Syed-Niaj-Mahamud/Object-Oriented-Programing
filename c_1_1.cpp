#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,gcd,s,a,i,b,d;
    cin>>x;

    for(i=1;i<x;i++)
    {
        z=i;
        b=x;
        while(b!=z)
        {
            if(b>z)
            {
                b=b-z;
            }
            else if(z>b)
            {
                z=z-b;
            }
        }
        gcd=z;
        d=i;

        s=0;
        a=gcd+d;

        if(a>s && a<x)
        {
            s=a;
            y=i;
        }


    }
    cout<<y;





}
