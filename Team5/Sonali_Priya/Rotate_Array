

void rotate(int* nums, int numsSize, int k){
    int nums_rotate[numsSize];
    k = k%numsSize;
    for (int i=0; i<numsSize; i++){
        nums_rotate[i] = nums[(numsSize-k+i)%numsSize];
    }
    for (int i=0; i<numsSize; i++){
        nums[i] = nums_rotate[i];
    }   
}
