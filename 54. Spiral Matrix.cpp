class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v1) {
        
            vector<int> v;
            
            int minr = 0, minc = 0;
            int maxr = v1.size() - 1, maxc = v1[0].size() - 1;
            
            int tne = v1.size() * v1[0].size();
            int cnt = 0;
            
            while(cnt < tne){
                
                for(int i = minc, j = minr; i <= maxc && cnt < tne; i++){
                    v.push_back(v1[j][i]);
                    cnt++;
                }
                minr++;

                for(int i = minr, j = maxc; i <= maxr && cnt < tne; i++){
                    v.push_back(v1[i][j]);
                    cnt++;
                }
                maxc--;

                for(int i = maxr, j = maxc; j >= minc && cnt < tne; j--){
                    v.push_back(v1[i][j]);
                    cnt++;
                }
                maxr--;
                
                for(int i = maxr, j = minc; i >= minr && cnt < tne; i--){
                    v.push_back(v1[i][j]); 
                    cnt++;
                }
                minc++;
        }
        return v;
    }
};