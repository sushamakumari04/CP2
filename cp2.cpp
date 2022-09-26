#include<iostream>
using namespace std;

int main()
{

int c=0;
int p=1,n;

cout<<"Enter the size of array"<<endl;
cin>>n;
int num[n],ans[n];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<n;i++)
{
  cin>>num[i];
}
for(int i= 0;i<n;i++)
{
 if(num[i]==0)
{
  c=c+1;
  continue;
}
else
{
 p=num[i]*p;
}

}
for(int i=0;i<n;i++)
{
if(num[i]==0 && c==1)
{
  ans[i]=p;
}
else if(num[i]!=0 && c==1)
{
ans[i]=0;
}
else if(num[i]!=0 && c==0)
{
ans[i]=p/num[i];
}
else if(c>1)
{
 ans[i]=0;
}
}
cout<<endl;
for(int i=0;i<n;i++)
{
 cout<<ans[i]<<" ";
}


return 0;
}
