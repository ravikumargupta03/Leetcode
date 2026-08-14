class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char , int> m;
        int left = 0 ;
        int right = 0;
        int n = s.length();
        int count=0;
        while(right < n){
            m[s[right]]++;
            while(m[s[right]]>2){
                m[s[left]]--;
                left++;
            }
            count= max(count , right-left+1);
            right++;
            
        }
        return count;
    }
};