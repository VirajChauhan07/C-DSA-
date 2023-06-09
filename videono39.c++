#include<stdio.h>
#include<iostream>
#include<vector>
// Recurrsion day-9
using namespace std;

int main()
{
}
    class Solution{
        private:
            void solve(vector<int> nums,vector<vector<int>>& ans,int index){
                
                if(index>= nums.size()){
                    ans.push_back(nums);
                }

                for(int j = index; j<nums.size(); j++){
                    swap(nums[index],nums[j]);
                    solve(nums,ans,index);
                    swap(nums[index],nums[j]);
                }
            }
        public:
            vector<vector<int>> permute(vector<int>& nums){
                vector<vector<int>> ans;
                int index=0;
                solve(nums,ans,index);
                return ans;
            }

    };
