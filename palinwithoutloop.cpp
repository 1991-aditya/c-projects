#include<iostream>
using namespace std;
int main(){
int num,rev=0,rem,temp;
cin>>num;
temp=num;
if(num!=0){

rem=num%10;
rev=rev*10+rem;
num=num/10;

}

if(num!=0){

rem=num%10;
rev=rev*10+rem;
num=num/10;

}
if(num!=0){

rem=num%10;
rev=rev*10+rem;
num=num/10;

}
if(num!=0){

rem=num%10;
rev=rev*10+rem;
num=num/10;

}
if(num!=0){

rem=num%10;
rev=rev*10+rem;
num=num/10;

}

cout<<rev;
cout<<temp;

 if(rev==temp){
cout<<"\nits a palindrome";
}
else{

cout<<"\nnot a palindrome";
}
return 0;

}




