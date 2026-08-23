class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int > st;
        for(int x : nums){
            st[x]++ ;
        }
        for(auto x: st){
            if(x.second == 1){
                return x.first;
            }
        }
      return -1;
    }
};