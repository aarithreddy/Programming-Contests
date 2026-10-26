#include<bits/stdc++.h>
using namespace std;

int submit(vector<int>& nums) {
    int left = 0, right = 0;
    long long ans = 0;
    while(right < nums.size()){
        if(nums[right] > maxK || nums[right] < minK){
            left = right + 1;
        }
        ans += (right - left + 1);
        right++;
    }

    return ans;
}

int main(){
    submit();
    return 0;
}