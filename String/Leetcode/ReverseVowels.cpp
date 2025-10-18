class Solution {
public:
    int isVowel(char ch) {
        string vowels = "aeiouAEIOU";
        return vowels.find(ch) != string::npos;
    }

    string reverseVowels(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (!isVowel(s[left])) {
                left++;
                continue;
            }
            if (!isVowel(s[right])) {
                right--;
                continue;
            }

            char t = s[left];
            s[left] = s[right];
            s[right] = t;
            left++;
            right--;
        }

        return s;
    }
};
