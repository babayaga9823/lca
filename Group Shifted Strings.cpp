
class Solution {



    string shift(string& s) {
        string key;
        int n = s.size();
        for (int i = 1; i < n; ++i) {
            int diff = s[i]-s[i-1];
            if (diff < 0) diff += 26;
            // change the difference from numbers to lower-case alphabets using 'a' + diff
            key += 'a' + diff + '_';
        }
        return key;
    }


public:

    vector<vector<string>> groupStrings(vector<string>& strings) 
    {
        unordered_map<string, vector<string>> m;

        vector<vector<string>> res;

        for (auto s: strings) 
        {
            m[shift(s)].push_back(s);
        }
        for (auto& a: m) 
        {
            res.push_back(a.second);
        }
        return res;
    }
};