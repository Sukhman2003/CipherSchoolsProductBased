
//Question 1 --> print greatest number

#include <iostream>
using namespace std;
int greatest(int num1,int num2,int num3){
if(num1>num2 && num1>num3 ){
    return num1;
}
else if(num2>num3){
    return num2;
}
else{
    return num3;
}
}
int main(){
int num1;
cout<<"Enter the first number:";
cin>>num1;
int num2;
cout<<"Enter the second number:";
cin>>num2;
int num3;
cout<<"Enter the third number:";
cin>>num3;
int result=greatest(num1,num2,num3);
cout<<"The largest number is: "<<result;
}

//Question 2 -->Corresponding grade using if-else-if statements

#include <iostream>
using namespace std;
char grade(int score){
if(score>=90 && score<=100){
    return 'A';
}
else if (score>=80 && score<=89) {
        return 'B';
} 
else if (score>=70 && score<=79) {
        return 'C';
} 
else if (score>=60 && score<=69) {
        return 'D';
} 
else if(score>=0 && score<=59) {
        return 'F';
    }
else{
    return 'E';
}
}
int main(){
int score;
cout<<"Enter the score: ";
cin>>score;
char result=grade(score);
cout<<"grade: "<<result;
}

//question 3 -->corresponding month of the year using a switch case

#include <iostream>
using namespace std;
string months(int number){
switch (number) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "september";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "Invalid";
        }
}
int main(){
int number;
cout<<"Enter a number";
cin>>number;
string result=months(number);
cout<<"The month is: "<<result;
}
