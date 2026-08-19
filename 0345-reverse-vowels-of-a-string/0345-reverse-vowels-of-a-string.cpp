class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        int start=0;
        int last = s.length()-1;
        string vowels="aeiouAEIOU";
        while(start<last){
            while(start<last && vowels.find(word[start])==string::npos){
                start++;
            }
            while(start<last && vowels.find(word[last])== string::npos){
                last--;
            }
            swap(word[start], word[last]);
            start++;
            last--;
        }

        return word;
    }
};