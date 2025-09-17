class Solution {
public:
// this function should be made outsie of the main function 
  bool isAlphaNumeric(char ch){
            if((ch>='0' && ch<='9' )||(tolower(ch)>='a' && tolower(ch)<='z')){
                return true;
            }
            return false;
        }
    bool isPalindrome(string s) {
        
        int n= s.length();
        int st=0;
        int end= n-1;

      

        while(st<=end){
            if(!isAlphaNumeric(s[st])){
                st++;
                continue;
            }

            if(!isAlphaNumeric(s[end])){
                end--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[end])){
                return false;
             

            }
               st++;
                end--;
            
        }
        return true;
    }
};