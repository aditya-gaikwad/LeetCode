class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        int idx[256]={0};
        if(n==1){
            return false;
        }
        for(int i=0;i<n;i++){
            idx[sentence[i]]=1;
        }
        for(int i=97;i<=122;i++){
            if(idx[i]==0){
                return false;
            }
        }
        return true;
    }
};