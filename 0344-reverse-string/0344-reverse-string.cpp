class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size();
        int st=0;
        int end= n-1;
// two pointer approach 
        while(st<=end){
            swap(s[st], s[end]);
            st++;
            end--;
        }
    }
};