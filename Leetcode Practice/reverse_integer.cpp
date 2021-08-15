/*
Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
Example 4:

Input: x = 0
Output: 0
 

Constraints:

-2^31 <= x <= 2^31 - 1
*/

// Solution

class Solution {
public:
    int reverse(int x) {
        
        long long resultant = 0;
        
        while(x) {
            resultant = resultant * 10 + x % 10;
            x /= 10;
        }
        
        return (resultant <= INT32_MIN || resultant >= INT32_MAX) ? 0 : resultant;
        
    }
};
