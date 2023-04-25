class Solution {
public:
    void combs(int idx,vector<int>lst,int t,int n,int sm, vector<int>&tmp,vector<vector<int>>&final){
        if(idx>=n){
            if(sm==t) final.push_back(tmp);
            return ;
        }
        tmp.push_back(lst[idx]);
        if(sm+lst[idx]<=t) combs(idx,lst,t,n,sm+lst[idx],tmp,final);
        tmp.pop_back();
        combs(idx+1,lst,t,n,sm,tmp,final);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>lst;
        vector<vector<int>>final;
        combs(0,candidates,target,candidates.size(),0,lst,final);
        return final;
    }
};
