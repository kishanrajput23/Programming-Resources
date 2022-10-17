package Questions;

import java.util.Arrays;

public class Leetcode_Question_34_Binary_Search
{
    public static void main(String[] args) {
        int[] nums = {5,7,7,8,8,10};
        int target = 4;
        int[] ans = searchRange(nums, target);
        System.out.println(Arrays.toString(ans));

    }
    // Find First and Last Position of Element in Sorted Array
    //https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/


    static int[] searchRange(int[] nums, int target)
    {
        int[] ans ={-1,-1};

        ans[0] = search(nums,target,true);
        if(ans[0]!=-1)
        {
            ans[1] = search(nums, target, false);
        }

        return ans;


    }
    static int search(int[] nums,int target,boolean findStartIndex)
    {
        //this function just return the index value of target
        //boolean variable to know whether we want to find the start index or end index
        int ans = -1;
        int start = 0;
        int end = nums.length - 1; //imp : -1 karna

        while(start<=end)
        {

            //find the middle element
//            //Now as we'll do it twice, it is better to make a seperate function for returning the index value
            //of target
            int middle = start + (end - start)/2;
            if (nums[middle]>target)
            {
                end = middle -1;
            }
            else if (nums[middle]<target)
            {
                start = middle + 1;
            }
            else
            {
                //potential answer found
                ans = middle;
                if (findStartIndex)
                {
                    end = middle -1;
                }
                else
                {
                    start = middle +1 ;
                }
            }

        }

        return ans;
    }
}