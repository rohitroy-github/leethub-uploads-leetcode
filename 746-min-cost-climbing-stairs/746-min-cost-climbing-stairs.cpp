class Solution {
        #include <algorithm>
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int arr[cost.size()]; 
        int i; 
        
        arr[0] = cost[0]; 
        arr[1] = cost[1]; 
        for(i=2;i<cost.size();i++)
        { 
        arr[i] = cost[i] + std::min(arr[i-1], arr[i-2]); 
        }
        
        return std::min(arr[cost.size()-2], arr[cost.size ()- 1]); 
    }
};