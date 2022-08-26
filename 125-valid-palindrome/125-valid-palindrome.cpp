class Solution {
public:
    bool isPalindrome(string s) {
         string temp="";
        string lowercase="";
    
   
    char ch;
    for(int i=0;i<s.length();i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
            temp.push_back(s[i]);
            }
    }
    for(int i=0;i<temp.size();i++){
        if(temp[i]>='A'&& temp[i]<='Z'){
            ch = temp[i] -'A' +'a';
            lowercase.push_back(ch);
        }
        else{
             lowercase.push_back(temp[i]);
        }
    }
    int st=0,e=lowercase.length()-1;
    
        while(st<=e){
              if(lowercase[st] != lowercase[e]){
             return 0;
            }
            else{
                    st++;
                    e--;
            }
            
        }
   return 1;
    
    }
};