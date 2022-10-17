package Questions;

public class Leetcode_410_Split_Array_Largest_Sum
{
//    https://leetcode.com/problems/split-array-largest-sum/
    public static void main(String[] args)
    {
        int[] nums = {7,2,5,10,8};
        System.out.println(splitArray(nums,2));
    }



    public static int splitArray(int[] nums, int m) {
        int start = 0;
        int end = 0;

        for (int j : nums) {
            start = Math.max(start, j);
            //in the end of the loop start will contain the max item from the array
            //simple linear search
            end += j;
            //which is the sum of all the elements of this array

            //now apply binary search to get the min largest sum

            while (start < end) {
                //we atart by trying middle as our potential answer
                int middle = start + (end - start) / 2;

                //calculate how many pieces you can divide this in with this max sum
                int sum = 0;
                int pieces = 1; // as atleast 1 piece is there which you can divide in 
                for (int num : nums) {
                    if (sum + num > middle) {
//                        you cannot add this in this sub array, and you have to make a new piece(sub-array)
                        //so you add this num in a new subarray and making that subarray(new)'s sum = num

                        sum = num;
                        pieces++; //as added a new subarray

                    } else {
                        //just adding in the previous subarray(old) one and continue the sum
                        sum += num;
                    }
                }

                if (pieces > m) {
                    start = middle + 1;
                } else //which means pieces <=m
                {
                    end = middle;
                }
                //we want pieces to be exactly equal to m

            }

        }
         return end;//or end or even mid as these 3 are gonna be equal
    }


}

