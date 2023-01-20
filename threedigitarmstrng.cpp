#include<iostream>
using namespace std;
int main()
{
	int sum=0,num,y,temp;
	cout<<"\nenter the number";
	cin>>num;
	temp=num;	
			while(num!=0){
                                       y=num%10;
				 	sum=sum+(y*y*y);
					num=num/10;

					}

	if(sum==temp){
			cout<<"\nthe number"<<" "<<temp<<" is an armstrong number";
			}
	else{
			cout<<"\nthe number is not an armstrong number";
			}





}