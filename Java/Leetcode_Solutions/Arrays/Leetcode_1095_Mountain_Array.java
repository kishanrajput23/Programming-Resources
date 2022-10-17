package Questions;

public class Leetcode_1095_Mountain_Array
{
//    https://leetcode.com/problems/find-in-mountain-array/
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,3,2,1};
        int x = search(arr,3);
        System.out.println(x);
    }
   public static int search(int[] arr, int target)
    {
        int peak = peakIndexInMountainArray(arr);
        int firstTry = BinarySearch(arr, target,0, peak );
        if( firstTry!=-1)
        {
            return firstTry;
        }
        //means we weren't able to find the element in the first half
        //of the array and now we will search in the second half
        else
            return BinarySearch(arr, target, peak+1,arr.length-1);
    }
    public static int peakIndexInMountainArray(int[] arr)
    {
        int start = 0;
        int end = arr.length - 1; //imp : -1 karna

        while(start<end)
        {
            //find the middle element
//            int middle = (start+end)/2;
            /* might be possible that (start+ end) exceeds the range of int in JAVA
             * hence it may give you some error
             * Hence a better way to find mid will be */
            int middle = start + (end - start)/2;
            if (arr[middle]>arr[middle+1])
            {
                //you ae in the decreasing part of the array
                //this may be the ans, but look at the left and this is why we don't do mid-1
                end = middle;
            }
            else if (arr[middle]<arr[middle+1])
            {
                //you are in the ascending part of the array
                //and we know that mid+1 element > middle element
                start = middle + 1;
            }


        }
        //in the end, start == end and pointing to the largest number because of the 2 checks and loop above
        //start and end are always trying to find max element in the above 2 checks
        //hence when they both point to the same element, that is the maximum one
        //at evert point of time for start and end they have the best possible answer till that time
        //and if we say that only item is remaining because of the above line that is the max element
        return start;
        // or return end as both are same

    }
    public static int BinarySearch(int[] arr, int target,int start, int end)
    {
//        int start = 0;
//        int end = arr.length - 1; //imp : -1 karna

        //firstly finding whether the array is ascending or descending sorted
        boolean isAscending = arr[start] < arr[end];

        while(start<=end)
        {
            //find the middle element
//            int middle = (start+end)/2;
            /* might be possible that (start+ end) exceeds the range of int in JAVA
             * hence it may give you some error
             * Hence a better way to find mid will be */
            int middle = start + (end - start)/2;
            //common for both :
            if(arr[middle]==target)
            {
                //ans found
                return middle;
            }

            //different :
            if(isAscending)
            {
                if (arr[middle]>target)
                {
                    end = middle -1;
                }
                else
                {
                    start = middle + 1;
                }
            }
            else {
                if (arr[middle]<target)
                {
                    end = middle -1;
                }
                else
                {
                    start = middle + 1;
                }

            }




        }
        return -1;

    }
}
