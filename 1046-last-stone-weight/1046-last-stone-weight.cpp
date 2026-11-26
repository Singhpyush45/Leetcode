class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> a;
        for(int i=0;i<stones.size();i++){
            a.push(stones[i]);
        }
        while(a.size()>1){
            int x = a.top();
            a.pop();
            int y = a.top();
            a.pop();
            if(x!=y) a.push(x-y);
        }
        if(a.size()==0) return 0;
        return a.top();
    }
};