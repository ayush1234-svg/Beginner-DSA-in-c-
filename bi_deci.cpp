#include<iostream>
using namespace std;
int binary_deci(int binary){
    int sum=0,pow=1,rem;
    for ( int i=0 ; binary > 0 ;i++){
        rem=binary%10;
        binary = binary/10;
        sum = sum + (pow*rem);
        pow = pow *2;
    }
    return sum;
}
int main(){
    int binary;
    cout << "ENTER THE BINARY =" ;
    cin >> binary;
    cout << "THE DECIMAL = " << binary_deci(binary) << endl;
   
    
    return 0;
}