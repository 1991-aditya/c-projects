#include<iostream>
using namespace std;
int main()
{
	int key,i,j,n,mid;
	int found=0;
	cout<<"enter the size";
	cin>>n;
	int a[n];
	j=n-1;
	cout<<"enter elements of array";
	for(i=0;i<=n-1;i++){
	cin>>a[i];
		}
	for(i=0;i<=n-1;i++){
	cout<<a[i]<<" ";
		}
	cout<<"\n";
	cout<<"enter the element to search";
	cin>>key;
	i=0;
	while(i<=j){
	mid=(i+j)/2;
		if(a[mid]==key){
		found=1;
		break;
			}
		else if(a[mid]>key){
		j=mid-1;

			}
		else{
		i=mid+1;
			}
		}
		if(found==1){
		cout<<"the key is found at "<<mid+1<<"position";
			}
		else{
		cout<<"key not found";
			}
	
}