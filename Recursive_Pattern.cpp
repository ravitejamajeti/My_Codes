#include<iostream>
using namespace std;

int main()
{
int b,n,pn,i,l,t;
cout<<"Give Highest Number"<<endl;
cin>>n;

for(b=n;b>=1;b--)
{
l=b;
n=b;
for(i=1;i<=l;i++)
{
pn=n;
while(pn>=1)
{
for(t=1;t<=i;t++)
{
cout<<pn;
}
cout<<endl;
pn--;
}
n--;
}
cout<<"------------------------"<<endl;
}
return 0;
}
