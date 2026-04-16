class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int max_len = 0;
        int left = 0;
        int right = 0;

        for (int right = 0; right<size(s); right++){

            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }

            max_len = max(max_len, right-left+1);
            seen.insert(s[right]);

        }

        return max_len;

        
    }
};


// z x y z x y z

// (z) 1
// (z,x) 2
// (z,x,y) 3
// (x,y) 2 
// (z, y, z)



