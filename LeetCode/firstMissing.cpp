#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = {-1,-4,0,1,2,3,7};
    int n= nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]<=0){
            nums[i] = n+1;
        }
    }
    for(auto &x:nums){
        cout<<x<<endl;
    }
    return 0;
}