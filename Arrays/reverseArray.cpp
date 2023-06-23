#include <iostream>
using namespace std;

void reverseArray(int arr[],int size){

    int s=0;
    int e=size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void PrintingArray(int arr[],int size){
    for(int i=0;i <size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[6]={1,3,7,8,9,10};
    int size;
    cin>>size;
    //int brr[5]={1,2,3,4,5};

      reverseArray(arr,size);

      PrintingArray(arr,size);
    


}