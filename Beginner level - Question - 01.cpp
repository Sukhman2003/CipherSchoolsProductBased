
//Question 1 -->Concatenate  two strings

#include <iostream>
using namespace std;
string concat(string str1,string str2){
return str1 + str2;
}
int main(){
string str1;
cout <<"enter your first string:";
cin>>str1;
string str2;
cout<<"Enter your second string:";
cin>>str2;
string resultString=concat(str1,str2);
cout<<"resulting String: "<<resultString<<endl;
}

//Question 2 -->Find average of five grades

#include<iostream>
using namespace std;
int average(int grade1,int grade2,int grade3,int grade4,int grade5){
return (grade1+grade2+grade3+grade4+grade5)/5;
}
int main(){
int grade1;
cout<<"Enter first grade:";
cin>>grade1;

int grade2;
cout<<"Enter second grade:";
cin>>grade2;

int grade3;
cout<<"Enter Third grade:";
cin>>grade3;

int grade4;
cout<<"Enter Forth grade:";
cin>>grade4;

int grade5;
cout<<"Enter Fifth grade:";
cin>>grade5;

int result=average(grade1,grade2,grade3,grade4,grade5);
cout<<"The average grade is: "<<result<<endl;
}

//Question 3 -->Square the given number

#include <iostream>;
using namespace std;
int square(int num){
return num*num;
}
int main(){
int num;
cout<<"Enter a number: ";
cin>>num;

int result=square(num);
cout<<"The square of"<< num<< "is:"<<result;
}
