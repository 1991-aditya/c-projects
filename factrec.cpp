#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int num;
	cin>>num;
	cout<<fact(num)<<" is the factorial of given number";
	
}
int fact(int x){
	static int count=0;
	count=count+1;
	cout<<"the function is called "<<count<<" times";
	cout<<"\n";
	if(x==0||x==1)
	return 1;
	else
	return x*fact(x-1);
}
