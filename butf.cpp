#include<iostream>
using namespace std;
int main(){
    int n=4;
    int i,j,k,l;
    for( i=0;i<n;i++){
        for( j=0;j<=i;j++){
            cout << "* ";

        }
        for( k=0;k<6-(2*i);k++){
            cout << "  ";

        }
        for(l=5-(3*i);l<6-(2*i);l++){
            cout <<"* ";
        }
        cout << endl;
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            cout << "* ";

        }
        for(k=0;k<6-2*i;k++){
            cout << "  ";
        }
        for(l=5-3*i;l<6-2*i;l++){
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}