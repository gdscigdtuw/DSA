public int[] productExceptSelf(int[] nums) {
         int product = 1;
        int zero1pos = -1;
        int zeroCount = 0;
        
        for(int i =0;i<nums.length;i++){
            if(nums[i]==0){
                if(zero1pos == -1){
                    zeroCount  =1;
                    zero1pos = i;
                }else{
                    zeroCount = 2;
                    break;
                }
            }else{
                product *= nums[i];
            }
        }
        
        for(int i=0;i<nums.length;i++){
            if(zeroCount==2){
                nums[i] = 0;
            }else if(zeroCount ==1){
                if(zero1pos != i && zero1pos!=-1){
                    nums[i] = 0;
                }else{
                    nums[i] = product;
                }
            }else{
                nums[i] = product/nums[i];
            }
        }
        return nums;
    }

        
    }
