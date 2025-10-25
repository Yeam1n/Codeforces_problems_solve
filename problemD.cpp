#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to compress the string into groups of characters
void compress(const string& s, vector<char>& chars, vector<int>& counts) {
    int n = s.size();
    if (n == 0) return;

    char cur = s[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == cur) {
            count++;
        } else {
            chars.push_back(cur);
            counts.push_back(count);
            cur = s[i];
            count = 1;
        }
    }
    // Last group
    chars.push_back(cur);
    counts.push_back(count);
}

int main() {
    ios::sync_with_stdio(false);  // Speed up I/O
    cin.tie(nullptr);

    int t;
    cin >> t;  // Read number of test cases
    while (t--) {
        string p, s;
        cin >> p >> s;  // Read both strings for the test case

        // Check if the size of s is within the valid range
        if (s.size() < p.size() || s.size() > 2 * p.size()) {
            cout << "NO" << "\n";
            continue;
        }

        // Vectors to store the characters and their counts from the strings
        vector<char> p_chars, s_chars;
        vector<int> p_counts, s_counts;

        // Compress both p and s into character-count pairs
        compress(p, p_chars, p_counts);
        compress(s, s_chars, s_counts);

        // If the sizes of the compressed strings don't match, print "NO"
        if (p_chars.size() != s_chars.size()) {
            cout << "NO" << "\n";
            continue;
        }

        bool ok = true;
        for (size_t i = 0; i < p_chars.size(); i++) {
            // Check if the characters match
            if (p_chars[i] != s_chars[i]) {
                ok = false;
                break;
            }
            // Check if the count of characters is valid (between count and 2*count)
            if (s_counts[i] < p_counts[i] || s_counts[i] > 2 * p_counts[i]) {
                ok = false;
                break;
            }
        }

        // Output the result based on whether the conditions are satisfied
        if (ok) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
