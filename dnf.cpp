#include<iostream>
#include<algorithm> // for std::swap
using namespace std;

int main(){
    int nums[] = {0,1,2,1,2,1,2,0,0}; // ✅ Use [] to declare array
    int n = sizeof(nums) / sizeof(nums[0]); // ✅ Get correct size of array
    int low = 0 , mid = 0 , high = n - 1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[high], nums[mid]);
            high--;
        }
    }

    // Optional: print the sorted array
    for(int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
