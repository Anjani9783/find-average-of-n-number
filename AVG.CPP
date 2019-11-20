#include<iostream.h>
#include<conio.h>
int main()
{int a[50],sum=0,n,i;
float avg;
cout<<"enter no. of data ; ";
cin>>n;
cout<<"enter the n no. of elements; ";
for(i=0;i<n;i++)
{cin>>a[i];
 sum+=a[i];
}
avg=sum/n;
cout<<"avg ="<<avg;
getch();
return 0;
}