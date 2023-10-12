#include<iostream>
using namespace std;
double Recurse(double n,int p=2)
{

    if(p==0)
      {return 1;}

    if(p==1)
    {return n;}

    else
    {return (n*Recurse(n,p-1));}

}
int main()

{
double n;
int p;
 cout<<"\nEnter the base value and power :";
    cin>>n>>p;
    cout<<"\nUsing Recursion, Power of number is : "<<Recurse(n,p);
return 0;
}
