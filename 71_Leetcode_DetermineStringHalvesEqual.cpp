class Solution {
public:
    bool halvesAreAlike(string s) {
        int n= s.size();
        int c=0,c1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                if(i<(n/2))
                    c++;
                else
                    c1++;
            }
        }
        if(c==c1)
            return true;
        else
            return false;
    }
};
