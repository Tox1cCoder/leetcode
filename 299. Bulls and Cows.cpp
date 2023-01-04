class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        unordered_map<char, int> secret_count;
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                secret_count[secret[i]]++;
            }
        }
        for (int i = 0; i < guess.size(); i++) {
            if (secret[i] != guess[i] && secret_count[guess[i]] > 0) {
                cows++;
                secret_count[guess[i]]--;
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
