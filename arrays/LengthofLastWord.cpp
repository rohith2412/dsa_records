class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.size() - 1;

        // checks weather the last word is space is yes then it automatically reduces the i
        while(i > 0 && s[i] == ' ') {   
            i--;
        }

        while(i > 0 && s[i] != ' ') {
            length ++;
            i--;
        }

         return length;
        
    }
};