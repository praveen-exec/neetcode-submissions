class Solution {
public:
    bool isAnagram(string s, string t) {
        //first approach ==>Sorting 
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());


        //check if the length of s & t is equal or not
        if(s.length()!=t.length()) return false;

        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]) return false;
       
        }
        return true;
    }
};
