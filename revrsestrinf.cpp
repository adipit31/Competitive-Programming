class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.length();
        int i = 0;

        while (i < n && s[i] == ' ') {
            i++;
        }

        string temp = "";
        while (i < n) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
            } else if (!temp.empty()) {
                if (!ans.empty()) {
                    ans = temp + " " + ans;
                } else {
                    ans = temp;
                }
                temp = "";
            }
            i++;
        }

        if (!temp.empty()) {
            if (!ans.empty()) {
                ans = temp + " " + ans;
            } else {
                ans = temp;
            }
        }

        return ans;
    }
};
