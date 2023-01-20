#include<iostream>
using namespace std;
static int count=0;
int fibb(int x);
int main()
{
	int num,y;
 	cout<<"enter the number of terms";
	cin>>num;
	y=fibb(num);
	cout<<y;
	cout<<"\n";
	cout<<count;
}
int fibb(int x)
{
	
	count=count+1;
	//cout<<"the function is called "<<count<<" times "<<"\n";
	int y;
	if(x==1){
	//cout<<"the function is called "<<count<<" times "<<"\n";
	return 0;
		}
	else if(x==2){
	return 1;
		}
	else{
	y=fibb(x-1)+fibb(x-2);
	return y;
		}
	
}