class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0, e=s.size()-1;
        while(st<e){
            swap(s[e],s[st]);
            st++;
            e--;
        }
    }
};