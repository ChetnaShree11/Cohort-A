/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
        int min=prices[0];
        int sum=0;
        for(int i=1;i<prices.size();i++)
        {
           if(sum<(prices[i]-min)){
                sum = prices[i]-min;}
            if(prices[i]<min)
            {
                min = prices[i];
            }

        }

        return sum;
    }
};
*/ //[MINE]

 int minSoFar = prices[0];

  int ans=0;

  for(int i=1; i<prices.size();i++)

  {

    int profit = prices[i] - minSoFar;

    if(profit>ans)

    {

      ans=profit;

    }

    minSoFar = min(prices[i],minSoFar);

  }

  return ans;

}
