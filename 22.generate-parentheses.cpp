/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 *
 * https://leetcode.com/problems/generate-parentheses/description/
 *
 * algorithms
 * Medium (52.97%)
 * Total Accepted:    306.5K
 * Total Submissions: 574.1K
 * Testcase Example:  '3'
 *
 * 
 * Given n pairs of parentheses, write a function to generate all combinations
 * of well-formed parentheses.
 * 
 * 
 * 
 * For example, given n = 3, a solution set is:
 * 
 * 
 * [
 * ⁠ "((()))",
 * ⁠ "(()())",
 * ⁠ "(())()",
 * ⁠ "()(())",
 * ⁠ "()()()"
 * ]
 * 
 */
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>vec;
        DFS(n,n,"",vec);
        return vec;
    }

    void DFS(int left,int right,string out,vector<string>&vec) {
        if (left > right) { 
            return;
            }
        if (left == 0 && right == 0) {
            vec.push_back(out);
            return;
        } 
        if (left > 0) {
            DFS(left - 1,right,out + "(",vec);
        }
        if (right > 0) {
            DFS(left,right - 1,out + ")",vec);
        }
    }
};

