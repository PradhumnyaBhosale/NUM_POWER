#include<iostream>
using namespace std;

double Power(double n,int p=2)
{
    double ans=1;
    if(p==0)
       return ans;
    else
 {
    for(int i=1;i<=p;i++)
    {ans=ans*n;}
    return ans;
 }
}


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

    cout<<"Enter the base value (power is default set to 2) :";
    cin>>n;
    cout<<"\nPower of number is : "<<Power(n);
    cout<<"\nEnter the base value and power :";
    cin>>n>>p;
    cout<<"\nPower of number is : "<<Power(n,p);
    cout<<"\nEnter the base value and power :";
    cin>>n>>p;
    cout<<"\nUsing Recursion, Power of number is : "<<Recurse(n,p);
return 0;
}
