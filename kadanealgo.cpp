#include<iostream>
using namespace std;
int main(){
    int ar[7]={3,-4,5,4,-1,7,-8};
    int n=7;
   int crtsm=0, mxsm=-100000;
    for(int i=0;i<n;i++){
        crtsm+=ar[i];
        if(mxsm<crtsm){
            mxsm=crtsm;
        }
        if(crtsm<0){
            crtsm=0;
        }


    }
    cout << mxsm;
}
