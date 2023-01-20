#include<iostream>
using namespace std;
int countdigit(int num){
			int i=0;
			while(num!=0){
                                      i=i+1;
				      num=num/10;
					}
			return i;
}

int main()
{
	    
            for(int i=10;i<1000;i++){
					int y,t,temp=i,sum=0;
				 	y=countdigit(i);
					

		if(y==2){
				while(i!=0){
				
				t=i%10;
				sum=sum+t*t;
                                i=i/10;
					}
   
			}
		else if(y==3){
				while(i!=0){
				
				t=i%10;
				sum=sum+t*t*t;
                                i=i/10;
                                       }

			}
		if(temp==sum){
                               cout<<" "<<temp;

				}
				





}





}