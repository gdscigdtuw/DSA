if(nums.length <1) return 0;
        int finalmaxSum = nums[0];
        int currentMaxSum[] = new int[nums.length];
        
        currentMaxSum[0] = nums[0];
        
        for(int i=1;i<nums.length;i++) {
           currentMaxSum[i] = Math.max(nums[i],nums[i]+currentMaxSum[i-1]);
            finalmaxSum = Math.max(finalmaxSum,currentMaxSum[i]);
        }
        
        return finalmaxSum;
    }
