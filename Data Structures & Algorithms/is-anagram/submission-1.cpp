class Solution {
public:
    bool isAnagram(string s, string t) {
    std::map <char, int> map_s;
    for(int i=0; i<s.length();i++){
        char x=s[i];


        if(map_s[x]!=0){
            map_s[x]++;
            }
        else{
            map_s[x]=1;

        }

    }
    std::map <char, int> map_t;
    for(int i=0; i<t.length();i++){
        char x=t[i];


        if(map_t[x]!=0){
            map_t[x]++;
            }
        else{
            map_t[x]=1;

        }

    }
    if(map_s==map_t){
        return true;
    }
    else{
        return false;
    }
    }
};
