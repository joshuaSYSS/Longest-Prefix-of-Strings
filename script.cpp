#include <string.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l = 0, r = 200;
        string first = "", last = "";
        char f[200] = "";char p[200] = "";
        for(auto& x : strs){
            char a[200]; a = x;
            if(strcmp(f, a) < 0) first = x, f = a;
            if(strcmp(p, a) > 0) last = x, p = a;
        }
        while(l<=r){
            int m = (l+r)/2;
            int ok = 1;
            if(m>min1.length()) {r = m - 1;continue;}
            string s1 = min1.substr(0, m);
            if(m>max1.length()) {r = m - 1;continue;}
            string s2 = max1.substr(0, m);
            ok = s1==s2;
            if(ok) l = m + 1;
            else r = m - 1;
        }
        return strs[0].substr(0, r);
    }
};
