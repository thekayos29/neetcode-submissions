class Solution {
public:
    bool isPalindrome(string s) {
        
        s.erase(std::remove_if(s.begin(), s.end(), [](unsigned char c) {
        return !std::isalnum(c);
        }), s.end());
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        string p;
        for (int i=s.length()-1;i>=0;i--){
            p+=s[i];
        }
        cout<<s<<endl;
        cout<<p;
        if(p==s){
            return true;
        }
        
        return false;
    }
};
