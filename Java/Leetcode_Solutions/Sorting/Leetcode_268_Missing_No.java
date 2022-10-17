package Question;

import java.util.Arrays;

//https://leetcode.com/problems/missing-number/
public class Leetcode_268_Missing_No
{
    public static void main(String[] args)
    {
       int[] nums = {9,6,4,2,3,5,7,0,1};
       System.out.println(missingNumber(nums));
    }
    public static int missingNumber(int[] nums)
    {
        int j = 0;
//        for (int i = 0; i < nums.length; i++)
//        //we will only move the i forwards when it is at its correct index
//        {
//            while (nums[i] < nums.length && nums[nums[i]]!=nums[i] )
//            {
//                Swap(nums, i, nums[i]);
//            }
//        }
        //ismein maybe complexity increase ho rhi hai
        while (j < nums.length)
        {
            int correct_index= nums[j];
            if (nums[j]<nums.length && nums[j]!=nums[correct_index])
            {
                Swap(nums,j,correct_index);
            }
            else j++;
        }

//        System.out.println(Arrays.toString(nums));
        //now search for first missing number
        for (int i = 0; i < nums.length ; i++)
        //we want it to traverse the whole array and not leave the last element
        {
            if (nums[i]!=i)
                return i;

        }
        return nums.length;
    }
    public static void Swap(int[] arr,int first,int second)
    {
        int temp = arr[first];
        arr[first]=arr[second];
        arr[second] = temp;
    }
}

