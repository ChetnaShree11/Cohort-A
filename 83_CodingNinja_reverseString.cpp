#include <bits/stdc++.h>
string reverseString(string str)
{
	// Write your code here.
	int j=str.size()-1,i=0;
            while(i<j)
            {
                swap(str[i],str[j]);
                j--;
                i++;
            }
    return str;
}
