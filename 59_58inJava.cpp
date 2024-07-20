int max_1_count=nums[0];
        int current_1_count=0;
        for(int i: nums)
        {
            if(i==0)
            {
                current_1_count=0;
            }
            else
            {
                current_1_count+=1;
            }
            if(current_1_count>max_1_count){
                max_1_count=current_1_count;
            }

        }
        return max_1_count;
