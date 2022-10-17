package Question;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

//https://leetcode.com/problems/set-mismatch/
public class Leetcode_645_Set_Mismatch
{
    public static void main(String[] args)
    {
        int[] nums = {1,2,2,4};
        System.out.println(Arrays.toString(findDuplicates(nums)));
    }
    public static int[] findDuplicates(int[] nums) {
//        List<Integer> ans = new ArrayList<>();
//        int[] arr2 = new int[45];
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
        while (j < nums.length) {
            int correct_index = nums[j]-1;
            if (nums[j] != nums[correct_index]) {
                Swap(nums, j, correct_index);
            }
            else j++;
        }



        for (int i = 0; i < nums.length ; i++)
        //we want it to traverse the whole array and not leave the last element
        {
            int correct_index = nums[i]-1;
            if (nums[i]!=i+1)
            {//i+1 should be the correct index ){
                return new int[]{nums[i],i+1};
            }
        }
        return new int[]{-1,-1};


    }

    public static void Swap(int[] arr,int first,int second)
    {
        int temp = arr[first];
        arr[first]=arr[second];
        arr[second] = temp;
    }
}
