#include<iostream>
using namespace std;
int main(){
int n,i,sum,a,b;
cin>>n;
a=0;
b=1;
cout<<a<<endl;
cout<<b<<endl;
for(i=1;i<=n;i++){
sum=a+b;
cout<<sum<<" "  ;
a=b;
b=sum;


}
return 0;

}