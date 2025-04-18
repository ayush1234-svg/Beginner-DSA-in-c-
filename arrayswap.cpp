#include<iostream>
using namespace std;
int largestidx (int arr[],int sz);
int smallidx(int arr[],int sz){
  int  smallest = 100000; 
  for ( int i=0 ; i<sz ;i++){
    if(arr[i]<= smallest){
        smallest = arr[i];


    }
  }
  for ( int i=0 ; i<sz ;i++)
{
    if(arr[i]==smallest){
        return i;
    }
}

}
int main (){
  int  arr[]={1,4,3,7,5,2};
  int sz = 6;
  swap(arr[smallidx(arr,sz)] , arr[largestidx(arr,sz)]);
  cout << "ARRAYS AFTER OPERATION"<< endl;
  for ( int i=0 ; i<sz ;i++){
    cout << arr[i] ;
  }

 

    return 0;
}
int largestidx(int arr[],int sz){
    int  largest = -100000;
   
    for ( int i=0 ; i<sz-1 ;i++){
      if(arr[i]>= largest){
          largest = arr[i];
  
  
      }
    }
    for ( int i=0 ; i<sz-1 ;i++)
  {
      if(arr[i]==largest){
          return i;
      }
  }
}