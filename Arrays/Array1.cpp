#include <iostream>
using namespace std;

void printArray(int arr[],int size){
      cout<<"Printing of an Array: ";

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i];
    }

}

int main(){

    int arr[100];
    int size;

      for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    

   /*/ cout<<"Array value at 0th index: "<<v[0]<<endl;
    cout<<"Array value at 1th index: "<<v[1]<<endl;
    cout<<"Array value at 2th index: "<<v[2]<<endl;
    cout<<"Array value at 3th index: "<<v[3]<<endl;
    cout<<"Array value at 4th index: "<<v[4]<<endl;*/

    printArray(arr,5);
    printArray(arr,3);

   
    

}