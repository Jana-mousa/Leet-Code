class Solution {
    public:
    vector<bool> kidsWithCandies(vector<int>& candies,int extraCandies){
        int mx=candies[0];
        vector<bool>ans(candies.size(),false);
        for(int i=1;i<candies.size();i++){
            mx=max(candies[i],mx);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=mx)
            ans[i]=true;
        }
        return ans;
    }
};