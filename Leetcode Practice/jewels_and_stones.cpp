// Link - https://leetcode.com/problems/jewels-and-stones/

/* 
Stats

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Jewels and Stones.
Memory Usage: 6.1 MB, less than 81.19% of C++ online submissions for Jewels and Stones.

771. Jewels and Stones

You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3
Example 2:

Input: J = "z", S = "ZZ"
Output: 0
Note:

S and J will consist of letters and have length at most 50.
The characters in J are distinct.
*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        int sum = 0;
        for(auto i : J){
            sum += count(S.begin(), S.end(), i);
        }
        
        return sum;
    }
};

