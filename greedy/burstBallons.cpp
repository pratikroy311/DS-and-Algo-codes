//https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/
#include <bits/stdc++.h>
using namespace std;
/*
the question says give minimum no of arrows to burst all ballongs
ex: {{10,16}, {2,8}, {1,6}, {7,12}}
each tuple is an interval and after soting it looks like this :

1______6
 2________8
      ^ 7______12
         ^ 10__12

so from the fig you can see that two arrows(marked in(^)) is required to burst
all ballons.
algo is:
1. Sort the points
2. Initialize the arrowcount and curr_start and current_end as 1st tuple of points
3. For(i=1;i<size;i++):
        if(overlap)
        {
            update current_start = max(ponts[i][0],curr)
            current_end = min(points[i][1],end)
        }
        else
        count++;
        currst = point[i][0]
        currend = points[i][1]
4. return count+1

Why count+1? I think you can figure it out do some debugging or you have
already got it.


*/

class Solution {
public:
    bool activityCompare(vector<int> s1, vector<int> s2) 
    { 
	return (s1[1] < s2[1]); 
    }


    int findMinArrowShots(vector<vector<int>>& points) {
        if(!points.size()) return;
        sort(points.begin(),points.end());
        int arrow_count=0, curr = points[0][0] , end = points[0][1];
        for(int i=1;i< points.size();i++)
        {
            //check for overlap
            if(points[i][0] <= end){
                curr = max(curr , points[i][0]);
                end = min(end , points[i][1]);
            }
            else if(points[i][0] > end){
                arrow_count++;
                curr = points[i][0];
                end = points[i][1];
            }

        }

        return arrow_count+1;
    }
};
int main() {
   vector<vector<int>> a= {{10,16}, {2,8}, {1,6}, {7,12}};
   Solution obj;
   cout << obj.findMinArrowShots(a);

//    for(int i=0;i<a.size();i++)
//    {
//        cout << " [ "<<a[i][0] <<"," << a[i][1] << "] " ;
//    }
   return 0;
}