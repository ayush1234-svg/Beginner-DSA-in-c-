#include<iostream>
#include<vector>
using namespace std;
vector<int> vec(vector<int> nums, int target){
    vector<int> ans;
    int i=0,n=nums.size(),j=n-1,ps;
    while(i<j){
        ps=nums[i]+nums[j];
        if(ps>target){
            j--;
        }else if(ps<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
            
        }
    }

}
using namespace std;
int main(){
    vector<int> nums={2,7,11,16};
 int   target=18;
 vector<int> ans=vec(nums,target);
 cout<< "THE INDEX 0F PAIR IS "<<ans[0]<<" "<<ans[1];



    return 0;
}




