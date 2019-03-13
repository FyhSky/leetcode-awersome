/*
 * @lc app=leetcode id=52 lang=cpp
 *
 * [52] N-Queens II
 *
 * https://leetcode.com/problems/n-queens-ii/description/
 *
 * algorithms
 * Hard (50.53%)
 * Total Accepted:    92.1K
 * Total Submissions: 182.3K
 * Testcase Example:  '4'
 *
 * The n-queens puzzle is the problem of placing n queens on an n×n chessboard
 * such that no two queens attack each other.
 * 
 * 
 * 
 * Given an integer n, return the number of distinct solutions to the n-queens
 * puzzle.
 * 
 * Example:
 * 
 * 
 * Input: 4
 * Output: 2
 * Explanation: There are two distinct solutions to the 4-queens puzzle as
 * shown below.
 * [
 * [".Q..",  // Solution 1
 * "...Q",
 * "Q...",
 * "..Q."],
 * 
 * ["..Q.",  // Solution 2
 * "Q...",
 * "...Q",
 * ".Q.."]
 * ]
 *   
 * 
 */

/*
class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        DFS(n,0,0,0,0,count);
        return count;
    }
    
    void DFS(int n,int row,int column,int pie,int na,int &count) {
        if (row >= n) {
            count++;
            return;
        } 
        int available = ((1 << n) - 1) & (~(column | pie | na));
        while (available) {
            int p = available & -available;
            available ^= p;// or available = available & (available - 1)
            DFS(n,row + 1,column | p,(pie | p) >> 1,(na | p) << 1,count);
            }
        
    }
};*/

/*class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        DFS(n,0,0,0,0,count);
        return count;
    }
    
    void DFS(int n,int row,int column,int pie,int na,int &count) {
    
        int available = ((1 << n) - 1) & (~(column | pie | na));
        while (available) {
            int p = available & -available;
            available ^= p;// or available = available & (available - 1)
            if (row == n - 1) {
                count++;
            } else {
                DFS(n,row + 1,column | p,(pie | p) >> 1,(na | p) << 1,count);
                }
             }
    }
};*/

/*
class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        DFS(n,0,0,0,0,count);
        return count;
    }
    
    void DFS(int n,int row,int column,int pie,int na,int &count) {
    
        int available = ((1 << n) - 1) & (~(column | pie | na));
        while (available) {
            int p = available & -available;
           
            if (row == n - 1) {
                count++;
            } else {
                DFS(n,row + 1,column | p,(pie | p) >> 1,(na | p) << 1,count);
                }
                 available ^= p;// or available = available & (available - 1)
             }
    }
};*/

class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        DFS(n,0,0,0,0,count);
        return count;
    }
    
    void DFS(int n,int row,int column,int pie,int na,int &count) {
        int available = ((1 << n) - 1) & (~(column | pie | na));
        while (available) {
            int p = available & -available;
            if (row == n - 1) {
                count++;
            } else {
                DFS(n,row + 1,column | p,(pie | p) >> 1,(na | p) << 1,count);
            }
             available = available & (available - 1);
        }
    }
};
