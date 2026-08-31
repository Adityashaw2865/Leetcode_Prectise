class Solution {
public:
    int maxFreqSum(string s) {
        int vowel[26] = {0};
        int consonant[26] = {0};

        for(char x : s) {
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
                vowel[x - 'a']++;
            }
            else {
                consonant[x - 'a']++;
            }
        }

        int maxVowel = 0;
        int maxConsonant = 0;

        for(int i = 0; i < 26; i++) {
            maxVowel = max(maxVowel, vowel[i]);
            maxConsonant = max(maxConsonant, consonant[i]);
        }

        return maxVowel + maxConsonant;
    }
};