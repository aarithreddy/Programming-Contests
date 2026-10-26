# Observations

- This is a relatively straightforward sliding window problem.

# Solution
- We have to maintain integer variables left and right, both initialised to 0.
- We then have to simulate the window and then shrink it when the condition is failed. That is, when nums[right] either exceeds maxK or goes lower than minK.
- The window is shrunk by the operation left = right + 1. What this does is skip past the variable which is currently failing the required condition.
- The number of subarrays that end at right is equal to (right - left + 1). Hence this is used to increment the answer.
- The answer is then returned.

**Example:**

Input: nums = [1,4,7,3], minK = 1, maxK = 5

- Answer is incrememted accordingly for [1] and [1, 4].
- Then, right reaches 2, so nums[right] = 7, which exceeds maxK.
- According to this logic, after the current iteration (the one in which the condition was broken), left and right both land at index 3.

# Time and Space Complexity
- Time : O(N) per test case.
- Space : O(1) per test case.