class Solution {
public:
    int bagOfTokensScore(vector<int>& arr, int power) {
        sort(arr.begin(), arr.end());
        int i = 0, j = arr.size() - 1, score = 0, maxScore = 0;
        while (i <= j) {
          if (power >= arr[i]) {
            power -= arr[i++];
            maxScore = max(maxScore, ++score);
          }
            else if (score > 0) {
                power += arr[j--];
                score--;
            } 
            else {
                break;
            }
        }
        return maxScore;
    }
};