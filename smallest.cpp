#include<iostream>
using namespace std;
int main(){
    int num[5] = { 1,5,-54,23,-18};
    int smallest = 100000;
    int i=0;
    for(int i=0;i<5;i++){
        if(num[i]<=smallest){
            smallest=num[i];
        }
    }
    cout << "THE VALUE OF SMALLEST ARRAY IS =" << smallest << endl;
    for(int i=0;i<5;i++){
        if(smallest==num[i]){
            cout << "THE INDEX OF SMALLEST ARRAY IS ="<< i << endl; 
        }
    }

   
    return 0;
}