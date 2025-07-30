class Solution {
public:
    bool isValid(string s) {
        vector<int> para;
        for (char i : s) {
            if (i == '(' || i == '{' || i == '[') {
                if (i == '(') {
                    para.push_back(1);
                } else if (i == '{') {
                    para.push_back(2);
                } else {
                    para.push_back(3);
                }
            } else {
                if (para.empty())
                    return false;

                int p = para.back();
                para.pop_back();
                bool ok = false;
                if (p == 1 && i == ')') {
                    ok = true;
                } else if (p == 2 && i == '}') {
                    ok = true;
                } else if (p == 3 && i == ']') {
                    ok = true;
                }

                if (!ok)
                    return false;
            }
        }
        return para.empty();
    }
};
