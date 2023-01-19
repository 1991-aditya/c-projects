#include<iostream>
using namespace std;
int main()
{
	int i,j,n,max,a[30],t;
	cout<<"\nenter size of array";
	cin>>n;
	cout<<"\nenter elements of array";
	for(i=0;i<=n-1;i++){
		cin>>a[i];
	}
	max=a[0];
	for(i=1;i<=n-1;i++){
		if(a[i]>max){
		max=a[i];
		}
	}
	t=max;
	for(i=0;i<=t-1;i++){
		for(j=0;j<=n-1;j++){
			if(a[j]>=max)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
		max--;
	}


}