class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int k=0;
        
        sort(ransomNote.begin(),ransomNote.end());
        sort(magazine.begin(),magazine.end());
        for(int i=0;i<ransomNote.size();i++){
            bool flag = false;
            for(int j=k;j<magazine.size();j++){
                if(ransomNote[i]==magazine[j]){
                    flag = true;
                    k=j+1;
                    break;
                }
            
            }
            if(!flag){
                return false;
            }
        }
        return true;
    }
};