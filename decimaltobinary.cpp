#include<iostream>
using namespace std;
int main()
{
int i,rem,num,q,sum;
cout<<"\nenter the number";
cin>>num;
i=1;
q=num;
 while(q>2){
rem=q%2;
q=num/2;
sum=sum+rem*i;
i=i*10;
}

cout<<sum;
return 0;






}