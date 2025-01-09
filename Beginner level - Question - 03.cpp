
//Question 1 -->calculates the sum of the first N natural numbers using a for loop

#include <iostream>
using namespace std;
int sum(int number){
    int a=0;
for(int i=0;i<=number;i++){
    a=a+i;
}
return a;
}
int main(){
int number;
cout<<"Enter a number: ";
cin>>number;
int result=sum(number);
cout<<"The sum of the first "<<number<<" natural numbers is: "<<result;
}

//Question 2 -->

