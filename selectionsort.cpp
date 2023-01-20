#include<iostream>
using namespace std;
int main()
{
	int i,j,n,min,temp;
	cout<<"\nenter the size of array";
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	b[i]=a[i];
	}
	for(i=0;i<=n-1;i++){
	min=i;
		for(j=i+1;j<=n-1;j++){
			if(a[min]>a[j]){
			min=j;
					}
			}
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
			}
	for(i=0;i<=n-1;i++){
	cout<<a[i]<<" ";
			}
	cout<<"\n";
	for(i=0;i<=n-1;i++){
	cout<<b[i]<<" ";
			}
				
}