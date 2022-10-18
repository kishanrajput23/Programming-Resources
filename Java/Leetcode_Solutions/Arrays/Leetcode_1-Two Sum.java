// Brute force solution that involves checking each element for a complementary element that equals
// target - currentElement

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int numsLength = nums.length;
        
        // We only care about returning the indecies of {currentElement, (target - currentElement)}
        for( int i = 0; i < numsLength; i++){
            for( int j = 0; j < numsLength; j++){
                if(  j!=i &&  ( target - nums[i]  == nums[j])){
                    return new int[]{ i, j };
                }
            }
        }
        return new int[2];
    }
}
