class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0;
        for (char c : s)
            if (c == '1') totalOnes++;

        int leftZeros = 0, rightOnes = totalOnes, maxScore = 0;

        
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == '0') leftZeros++;
            else rightOnes--;

            int score = leftZeros + rightOnes;
            maxScore = max(maxScore, score);
        }

        return maxScore;
    }
};
