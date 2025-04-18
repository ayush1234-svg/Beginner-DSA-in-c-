#include<iostream>
#include<vector>
using namespace std;
vector<int> vec(vector<int> nums, int target){
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                
            }
        }
    }
    

}
using namespace std;
int main(){
    vector<int> nums={2,7,11,16};
 int   target=9;
 vector<int> ans=vec(nums,target);
 cout<< "THE INDEX 0F PAIR IS "<<ans[0]<<" "<<ans[1];



    return 0;
}
