#include<iostream>
using namespace std;
int main()
{
	int i,j,n,temp;
	cout<<"enter array size";
	cin>>n;
	int a[n],b[n];
		for(i=0;i<=n-1;i++)
		{
		cin>>a[i];
		b[i]=a[i];
		}
		for(i=0;i<=n-1;i++)
			for(j=0;j<=n-1-i;j++){
				if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
					}
						}
	for(int i=0;i<=n-1;i++){
	cout<<a[i]<<" ";
			}
	cout<<"\n";
	for(int i=0;i<=n-1;i++){
	cout<<b[i]<<" ";
			}
	cout<<"\n";
				

					
}