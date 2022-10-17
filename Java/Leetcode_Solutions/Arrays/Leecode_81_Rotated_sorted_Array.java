package Questions;

public class Leecode_81_Rotated_sorted_Array
{
    //this comes with a twist that the elements in the array may be duplicate
    public static void main(String[] args)
    {
        int[] nums = {1,0,1,1};
        int target = 0;

        System.out.println(search(nums,target));
    }
    public static boolean search(int[] nums, int target)
    {
        int pivot = findPivotwithDuplicates(nums);

        //case 1 :
        //if you did not find the pivot then the array is not rotated
        if (pivot==-1)
        {
            //just do normal binary search
            return nums[0] == target;
        }
        //when you've found the pivot
        //Case 1:
        if (nums[pivot]==target)
        {
            return true;
        }
        //Case 2 : target element > start element hence, we search from start till pivot -1
        if (target>=nums[0])
        {
            return ( BinarySearch(nums, target,0,pivot-1));

        }
        return BinarySearch(nums,target,pivot+1, nums.length-1);
        //search space is reduced to pivot + 1 till end
    }
    public static int findPivotwithDuplicates(int[] arr)
    {
        int start = 0;
        int end = arr.length - 1;

        //4 cases over here\
        while(start<=end)
        {
            int middle = start + (end - start)/2;
            //if first condition is false it won't even check for the next condition
            if ( middle<end && arr[middle]>arr[middle+1]) //this condition is very important as it will ensure that mid+1
            //doesn't go out of bounds
            {
                return middle;
            }
            if (middle > start && arr[middle]<arr[middle-1] )//same here so that mid -1 doesn't go out of bound
            {
                return (middle -1);
            }
//            if (arr[start]>arr[middle])
//            {
//                end = middle-1;
//            }
//            else
//            {
//                start = middle + 1;
//            }
            //this above condition will be only different as maybe start mid and end will be same
            //then this condition will fail
            //hence if elements at start, middle and end are equal then skip start and end

            if (arr[start]==arr[middle]&&arr[middle]==arr[end])
            {
                //skip the duplicates

                //but what if these elements at start and end were the pivots?
                //hence check if start and end are pivots
                if (start>middle && arr[start]>arr[start+1])
                {
                    //then start will the pivot
                    return start;
                }
                start++;
                if (end>middle && arr[end]>arr[end-1])
                {
                    //then end will the pivot
                    return end;
                }

                end--;
            }
        }
        return -1;//when element not found
    }
    static boolean BinarySearch(int[] arr,int target,int start,int end)
    {
        while(start<=end)
        {
            //find the middle element
//            int middle = (start+end)/2;
            /* might be possible that (start+ end) exceeds the range of int in JAVA
             * hence it may give you some error
             * Hence a better way to find mid will be */
            int middle = start + (end - start)/2;
            if (arr[middle]>target)
            {
                end = middle -1;
            }
            else if (arr[middle]<target)
            {
                start = middle + 1;
            }
            else
            {
                //ans found
                return true;
            }
        }
        return false;

    }
}
