class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.length();
        int m= s2.length();
        if(n>m)return false;

        // creatinf unorderd map for storing frequency
        unordered_map<char, int> need, window;

        // storinf frequnecy of s1;
        for(char ch:s1){
            need[ch]++;
        }

        // storing for s2
        // window size
        for(int i=0;i<n;i++){
            window[s2[i]]++;
        }

        if(need==window)return true;

        for(int i=n;i<m;i++){
            char in=s2[i];
            char out=s2[i-n];

            window[in]++;
            window[out]--;
            if (window[out] == 0) window.erase(out);


            if(window == need)return true;

        }
        return false;
    }
};