// Link - https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

/*
1588. Sum of All Odd Length Subarrays

Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.

A subarray is a contiguous subsequence of the array.

Return the sum of all odd-length subarrays of arr.

 

Example 1:

Input: arr = [1,4,2,5,3]
Output: 58
Explanation: The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58
Example 2:

Input: arr = [1,2]
Output: 3
Explanation: There are only 2 subarrays of odd length, [1] and [2]. Their sum is 3.
Example 3:

Input: arr = [10,11,12]
Output: 66
 

Constraints:

1 <= arr.length <= 100
1 <= arr[i] <= 1000
*/

// Naive Approach

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       
        int odd = 1;
        int sum = 0, result = 0;
        for(int i = 0; i < arr.size(); i++){
            for(int j = i; j < arr.size(); j++){
                sum += arr[j];
                if(odd % 2 == 1){
                    result += sum;
                }
                odd++;
            }
            sum = 0;
        }
        return result;
    }
};

// Better Approach

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int len = arr.size(), k, sum = 0;
        for(int i = 0; i < len; i++){
            k = (len - i) * (i + 1);
            if(k % 2 == 0) k /= 2;
            else k = (k / 2) + 1;
            sum += arr[i] * k;
        }
        return sum;
    }
};
