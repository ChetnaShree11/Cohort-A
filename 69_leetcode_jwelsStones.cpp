class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(auto i: stones)
        {
            size_t j= jewels.find(i);
            if(j!=string::npos)
            {
                count ++;
            }
        }
        return count;

    }
};
