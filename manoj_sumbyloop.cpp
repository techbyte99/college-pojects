#include <iostream>
using namespace std;
int main()
{
int i,n,s=0;
i=1;
cout<<"Enter the value of n=";
cin>>n;
while(i<=n)
{
cout<<i<<"\t";
s=s+i;
cout<<s;
i++;
}
}
