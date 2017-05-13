#include<iostream>
int main()
{
 
 int a,s,d,sum=0;
 cout<<"Enter number=";
 cin>>a;
 for(s=1;s<=a;s++)
 {
  d=s*s;
  sum=sum+d;
 }
 cout<<"\nSum Is = "<<sum;
 return 0;
}