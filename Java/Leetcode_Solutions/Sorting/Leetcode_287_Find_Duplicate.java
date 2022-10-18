package Question;

public class Leetcode_287_Find_Duplicate
{
    public static void main(String[] args)
    {
        int[] nums = {1,3,4,2,2};
        System.out.println(findDuplicate(nums));
    }
    public static int findDuplicate(int[] nums)
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
            if (nums[j]!=j+1)
            {
                int correct_index= nums[j]-1;
                if (nums[j]!=nums[correct_index])
                {
                    Swap(nums,j,correct_index);
                }
                else return nums[j];
            }
            else
                j++;

        }
        return -1;
    }
    public static void Swap(int[] arr,int first,int second)
    {
        int temp = arr[first];
        arr[first]=arr[second];
        arr[second] = temp;
    }
}
