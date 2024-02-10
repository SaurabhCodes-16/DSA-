int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        vector<int> string(128,-1);
        int left = 0;

        for(int right = 0; right < n; right++){
            if(string[s[right]] >=left){
                left = string[s[right]]+1;
            }
            string[s[right]]=right;
            maxLength = max(maxLength , right-left+1);
        }

        return maxLength;
        
    }

    /*Iteration 1: s[0] is 'a'.

charIndex['a'] is -1 (not encountered before), so left remains 0.
charIndex['a'] is updated to 0.
maxLength becomes max(0, 0 - 0 + 1) = 1.
Iteration 2: s[1] is 'b'.

charIndex['b'] is -1 (not encountered before), so left remains 0.
charIndex['b'] is updated to 1.
maxLength becomes max(1, 1 - 0 + 1) = 2.
Iteration 3: s[2] is 'c'.

charIndex['c'] is -1 (not encountered before), so left remains 0.
charIndex['c'] is updated to 2.
maxLength becomes max(2, 2 - 0 + 1) = 3.
Iteration 4: s[3] is 'a'.

charIndex['a'] is 0, which is greater than or equal to left (0).
left is updated to charIndex['a'] + 1, so left becomes 1.
charIndex['a'] is updated to 3.
maxLength remains 3.
Iteration 5: s[4] is 'b'.

charIndex['b'] is 1, which is greater than or equal to left (1).
left is updated to charIndex['b'] + 1, so left becomes 2.
charIndex['b'] is updated to 4.
maxLength remains 3.
Iteration 6: s[5] is 'c'.

charIndex['c'] is 2, which is greater than or equal to left (2).
left is updated to charIndex['c'] + 1, so left becomes 3.
charIndex['c'] is updated to 5.
maxLength remains 3.
Iteration 7: s[6] is 'b'.

charIndex['b'] is 4, which is greater than or equal to left (3).
left is updated to charIndex['b'] + 1, so left becomes 5.
charIndex['b'] is updated to 6.
maxLength remains 3.*/