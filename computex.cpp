#include<iostream>
using namespace std;

// Function to print binary of number
void print_binary(int num) {
    cout << "Binary representation: ";
    string bin = "";
    while(num > 0){
        bin = char((num % 2) + '0') + bin;
        num /= 2;
    }
    cout << bin << endl;
}

// Binary exponentiation
int computex(int a,int x){
    int ans = 1;
    while(a > 0){
        if(a % 2 == 1){
            ans *= x;
        }
        x *= x;
        a /= 2;
    }
    return ans;
}

int main(){
    int x, n;
    cout << "Enter the number = ";
    cin >> x;
    cout << "Enter the power = ";
    cin >> n;

    print_binary(n);  // Optional: Show binary
    cout << "The answer is = " << computex(n, x) << endl;

    return 0;
}
