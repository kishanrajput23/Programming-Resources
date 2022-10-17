package Questions;

public class Leetcode_Question_852_Binary_search
{
//    852. Peak Index in a Mountain Array
//    https://leetcode.com/problems/peak-index-in-a-mountain-array/
    public static void main(String[] args)
    {
        int[] arr = {1,2,3,4,3,2,1};
        System.out.println(peakIndexInMountainArray(arr));
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



}