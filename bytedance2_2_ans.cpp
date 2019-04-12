#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void maxArea(vector<vector<int>>& grid, int i, int j, int &max){
        grid[i][j] = 0;
        if(i > 0){
            if(grid[i-1][j] == 1){
                max++;
                maxArea(grid, i-1, j, max);
            }
        }
        if(i < grid.size()-1){
            if(grid[i+1][j] == 1){
                max++;
                maxArea(grid, i+1, j, max);
            }
        }
        if(j > 0){
            if(grid[i][j-1] == 1){
                max++;
                maxArea(grid, i, j-1, max);
            }
        }
        if(j < grid[0].size()-1){
            if(grid[i][j+1] == 1){
                max++;
                maxArea(grid, i, j+1, max);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    int temp = 1;
                    maxArea(grid, i ,j ,temp);
                    if(temp > max){
                        max = temp;
                    }
                }
            }
        }
        return max;
    }
};