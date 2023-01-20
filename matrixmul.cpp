#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2,i,j,sum=0;
	cout<<"enter the number of rows and col.for the first matrix";
	cin>>r1>>c1;
	cout<<"enter the number of rows and col.for the second matrix";
	cin>>r2>>c2;
	int a[r1][c1],b[r2][c2];
	cout<<"\nenter element for first matrix";
		for(i=0;i<=r1-1;i++){
			for(j=0;j<=c1-1;j++){
				cin>>a[i][j];
				}
			}
	cout<<"\nenter element for second mtrix";
                for(i=0;i<=r2-1;i++){
			for(j=0;j<=c2-1;j++){
				cin>>b[i][j];
				}
			}
		cout<<"\nthe first matrix is:"<<"\n";
		for(i=0;i<=r1-1;i++){
			for(j=0;j<=c1-1;j++){
				cout<<a[i][j]<<" ";
				}
			cout<<"\n";
			}
		cout<<"\nthe second matrix is:"<<"\n";
		for(i=0;i<=r2-1;i++){
			for(j=0;j<=c2-1;j++){
				cout<<b[i][j]<<" ";
				}
			cout<<"\n";
			}
		if(c1==r2){
		cout<<"\nmultiplied matrix is:"<<"\n";
		for(int i=0;i<=r1-1;i++){
			for(int j=0;j<=c2-1;j++){
				for(int k=0;k<=c1-1;k++){
			sum+=a[i][k]*b[k][j];
				}
			cout<<sum<<" ";
			sum=0;
			}
			cout<<"\n";
			}
			}
		
	}