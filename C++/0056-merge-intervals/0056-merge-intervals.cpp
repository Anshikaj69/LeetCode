class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;

        sort(intervals.begin(), intervals.end(), 
        [](vector<int> f, vector<int> s) -> bool {
            return f[0] < s[0];
        });

        ans.push_back(intervals[0]);

        for(int i=1; i< intervals.size(); i++){
            int n = ans.size()-1;
            if(ans[n][1] >= intervals[i][0]){
                int end = (ans[n][1] > intervals[i][1]) ? ans[n][1] :  intervals[i][1] ;
                ans[n][1] = end;
            }else{
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};