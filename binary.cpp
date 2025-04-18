#include<iostream>
using namespace std;
int deci_binary(int num);
int deci_binary( int num){
   int sum=0,pow=1,rem;
    for(int i=0; num > 0; i++){
        
        
        rem = num%2;
        num = num /2;
        sum = sum + (rem*pow);
       pow = pow*10;
      
       

    }
    return sum;

}





int main(){
    int num;
    cout << "ENTER THE NUMBER FOR BINARY CONVERSION = ";
        cin >> num;
    
   
    
    cout << "THE ANSWER IS =" << deci_binary(num) << endl;
    return 0;
}