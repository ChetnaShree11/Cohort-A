class Solution {
public:
    string sortSentence(string s) {
    s+=" ";
    vector<string> v(9);
    string s1="";
    for(char i: s)
    {
        if(i!=' ')
        {
            s1+=i;
        }
        else{
            char a = s1.back();
            int a1= a-'0';

            s1.pop_back();
            v[a1-1]=s1;
            s1="";
        }
    }

    s1="";
    for(auto i : v)
    {
        s1+=i;
        s1+=" ";
    }
   while(s1.back()==' ')
    {
        s1.pop_back();
    }
    return s1;


    }
};
