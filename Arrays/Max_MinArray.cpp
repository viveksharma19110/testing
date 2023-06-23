#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[],int size){
      cout<<"Printing of an Array: ";

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }

}

    int MIN_VALUE(int arr[],int size){

    int min=INT_MAX;
    for(int i=0; i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
       return min;
    }

     int MAX_VALUE(int arr[],int size){

    int max=INT_MIN;
    for(int i=0; i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
       return max;
    }

int main(){

    int arr[100]={1,3,2,5,4,6,7,8,9,10,22};
    
   // cout<<"Arrays Element: "<<printArray<<endl;
    //print array
    printArray(arr,11);
    cout<<endl;

    cout<<"Min Value Is : "<<MIN_VALUE(arr,11)<<endl;
    cout<<"Max Value Is : "<<MAX_VALUE(arr,11)<<endl;

}