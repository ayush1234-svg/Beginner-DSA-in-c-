#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int start=0,end=4;
    for(int i=0;start<end;i++){
        swap(arr[start],arr[end]);
        start++,end--;

    }
    for(int i=0;i<5;i++){
        cout << arr[i]<<endl;
    }

    return 0;
}