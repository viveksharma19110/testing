#include <iostream>
using namespace std;

bool linearsearch(int arr[],int size, int key){
       for (int i = 0; i < size; i++)
       {
        if (arr[i]==key){
            return true;
        }
        
       
       }
       return false;

}

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;

    cout<<"Enter your key: "<<endl;
    cin>>key;

    cout<<"Your Key is :"<<linearsearch(arr,10,key);





}