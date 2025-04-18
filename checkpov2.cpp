#include<iostream>
using namespace std;
int main(){
    int n,pow=2,a=1;
    cout << "ENTER THE NUMBER TO CHECK IF IT IS POWER OF 2";
    cin >> n;
    for(int i=1;pow<=n;i++){
        if(n==pow){
            cout <<"THE NUMBER IS POWER OF 2";
            a=1;
        }else{
            a=0;

        }
        pow*=2;
    }
    if(a==0){
        cout << "THE NUMBER IS NOT POWER OF 2";
    }
    
    return 0;
}