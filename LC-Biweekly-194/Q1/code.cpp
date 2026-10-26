#include<bits/stdc++.h>
using namespace std;

int submit(vector<int>& nums) {
    int p{}, v{};

    for(int i = 1; i + 1 < nums.size(); i++){
        if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) p += nums[i];
        if(nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) v += nums[i];
    }

    return p - v;
}

int main(){
    submit();
    return 0;
}