#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    
    int n,k=0;
    cout << "ENTER THE KEY FOR SEARCHING";
    cin >> n;
    for(int i:vec){
        if(n==i){
            cout << "KEY MATCHED";
            k=1;
        }
        
    }
    if(k==0){
        cout << "KEY NOT FOUND";
    }

    return 0;
}