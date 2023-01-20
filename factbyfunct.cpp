#include<iostream>
using namespace std;
int fact(int x){
			int i,p=1;
			for(i=1;i<=x;i++){
						p=p*i;

					}
							return p;

}

int main()
{
	int num,y;
	cout<<"\ninput the number";
	cin>>num;
 y=fact(num);


cout<<y;




}