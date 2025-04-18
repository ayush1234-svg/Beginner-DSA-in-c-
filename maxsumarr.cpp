#include<iostream>
using namespace std;
int main(){
   int arr[]={3,-4,5,4,-1,7,-8};
   int mx=-10000;
   int crtsum=0,n=7;
   for(int st = 0 ; st<n;st++){
    crtsum=0;
    for(int end=st ; end<n ; end++){
        crtsum+=arr[end];
        if(mx<crtsum){
            mx=crtsum;
        }
    }
   }
   cout << mx;
    return 0;
}