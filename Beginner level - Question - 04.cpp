
//Question 1 -->Find the maximum and the minimum element of the array

#include <iostream>
using namespace std;
int min(int arr[],int size){
int min =arr[0];
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(arr[j]<min){
            min=arr[j];
        }
    }
}
return min;
}
int max(int arr[],int size){
int max =arr[0];
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
}
return max;
}
int main(){
int size;
cout<<"Enter size of array: ";
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
int result1=min(arr,size);
int result2=max(arr,size);
cout<<"Minimum element is: "<<result1<<endl<<"Maximum element is: "<<result2<<endl;
}
