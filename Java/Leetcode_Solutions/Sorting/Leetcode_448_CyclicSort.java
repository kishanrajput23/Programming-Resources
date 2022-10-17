package Question;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
public class Leetcode_448_CyclicSort
{
    public static void main(String[] args)
    {
        int[] arr = {1,1};
        System.out.println(findDisappearedNumbers(arr));

    }
    public static List<Integer> findDisappearedNumbers(int[] nums)
    {
        List<Integer> ans = new ArrayList<>();
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
            int correct_index = nums[j]-1;
            if ( nums[j]!=nums[correct_index])
            {
                Swap(nums,j,correct_index);
            }
            else j++;
        }



//        System.out.println(Arrays.toString(nums));
//        now search for first missing number
//        int[] arr1 = new int[9];
        for (int i = 0; i < nums.length ; i++)
        //we want it to traverse the whole array and not leave the last element
        {

            if (nums[i]!=i+1)
            {//i+1 should be the correct index ){
                ans.add(i+1);
            }
        }

        return ans;

    }
    public static void Swap(int[] arr,int first,int second)
    {
        int temp = arr[first];
        arr[first]=arr[second];
        arr[second] = temp;
    }
}

