 #include<iostream>
 using namespace std;
 int main(){
   int nums[5]={1,2,2,3,2};
   int freq=0,ans=0;
   for(int i=0;i<5;i++){
    if(freq==0){
        ans=nums[i];
    }
    if(ans==nums[i]){
        freq++;
    }else{
        freq--;
    }
   }
   cout << ans;
    return 0;
 }