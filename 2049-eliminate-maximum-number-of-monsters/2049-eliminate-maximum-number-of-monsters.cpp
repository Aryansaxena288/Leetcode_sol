class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        int n = dist.size();
        vector<double> time(n);
        for(int i=0;i<n;i++)
        {
            time[i] = dist[i]/(double)speed[i] ;
        }
        
        sort(time.begin(),time.end());
        
        int t=0;
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            if(t<time[i])
                count++;
            else 
                break;
            t++;
        }
        return count;
    }
};

//Wrong solution

//class Solution {
// public:
//     int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
//         int n = dist.size();
        
//         vector<pair<int,int>> v;
//         for(int i=0;i<n;i++)
//         {
//             v.push_back({dist[i],speed[i]});
//         }
        
//         sort(v.begin(),v.end());
        
//         int count=1;
//         v[0].first = -1;
        
//         for(int i=0;i<n;i++)
//         {
//             if(v[i].first == 0)
//                 return count;
//            for(int j=i+1;j<n;j++) 
//            {
//                v[j].first -= v[j].second;
//            }
            
//             v[i].first = -1;
//             count++;
//         }
        
//         return count;
//     }
// };