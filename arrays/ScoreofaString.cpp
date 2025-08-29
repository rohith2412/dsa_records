class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        for ( int i = 0; i < s.size() - 1; i++ ) {
            score = score + abs(s[i] - s[i + 1]);
        }
        return score;
    }
};


/**
 * Loop runs with i = 0,1,2,3.

i = 0 → s[0] = 'h' (104), s[1] = 'e' (101)
score = 0 + |104 - 101| = 3

i = 1 → s[1] = 'e' (101), s[2] = 'l' (108)
score = 3 + |101 - 108| = 3 + 7 = 10

i = 2 → s[2] = 'l' (108), s[3] = 'l' (108)
score = 10 + |108 - 108| = 10 + 0 = 10

i = 3 → s[3] = 'l' (108), s[4] = 'o' (111)
score = 10 + |108 - 111| = 10 + 3 = 13
 */