#include<iostream>
using namespace std;
int main(){
 int a,b,c,max;
cin>>a>>b>>c;
 max=(a>b)?a:b;
max=(c>max)?c:max;
cout<<"\nmaximum of three numbers is:"<<max;
return 0;

}