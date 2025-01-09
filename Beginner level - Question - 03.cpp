
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

//Question 2 -->calculates the factorial of N using a loop

#include <iostream>
using namespace std;
int factorial(int number){
    int a=1;
for(int i=number;i>=1;i--){
    a=a*i;
}
return a;
}
int main(){
int number;
cout<<"Enter a number: ";
cin>>number;
int result=factorial(number);
cout<<"The factorial of "<<number<<" is: "<<result;
}

//Question 3 -->Prints the multiplication table of N up to 10 using a loop

#include <iostream>
using namespace std;
int table(int number,int i ){
return number*i;
}
int main(){
int number;
cout<<"Enter a number: ";
cin>>number;
for(int i=1;i<11;i++){
int result=table(number,i);
cout<<number<<" x "<<i<<" = "<<result<<endl;
}
}
