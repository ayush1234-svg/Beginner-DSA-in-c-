#include<iostream>
using namespace std;
bool isvalid(int arr[],int n,int m,int mid){
    int student = 1 ,pages = 0 ;
    for(int i=0;i<n;i++){
        if(arr[i]> mid){
            return false;
        }
        if(pages + arr[i] <= mid){
            pages += arr[i];
        }else {
            student++;
            pages = arr[i];
        }
        if(student > m){
            return false;
        }
    }
    return true;

}
int allocation(int arr[],int n,int m){
    if(m>n){
        return -1;
    }
    int st = 0,end,mid,ans,sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    end = sum;
    while(st<=end){
        mid = st +(end-st)/2;
        if(isvalid(arr,n,m,mid)) { //valid search on left for minimum
            ans = mid;
            end = mid-1;


        } else {
            st = mid + 1;
        }
    }
    return ans;
}


int main(){
  int   n=4,m=2;
  int arr[4] = {2,1,3,4};
  cout << allocation(arr,n,m) << endl;
  
    return 0;
}