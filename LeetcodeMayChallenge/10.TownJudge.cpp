class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        int tvalue[N+1];
        for(int i=1;i<N+1;i++)
        {
            tvalue[i]=0;
        }
        for(int i=0;i<trust.size();i++)
        {
            tvalue[trust[i][0]]--;
            tvalue[trust[i][1]]++;
        }
        
        for(int i=1;i<N+1;i++)
        {
            if(tvalue[i] == N-1)
                return i;
        }
        return -1;
        
    }
};