package Questions;

public class Leetcode_Question_744_binary_search
{
//    https://leetcode.com/problems/find-smallest-letter-greater-than-target/
    // we'll use modulo operator
    public static void main(String[] args) {
//    int[] arr = {1, 4, 12, 14, 34, 55, 65, 78, 85, 333};
//    System.out.println(BinarySearch(arr, 45));
        char[] letters = {'c','f','g'};
        char target = 'k';
        System.out.println(nextGreatestLetter(letters,target));
    }
    //binary search is the optimised way to search for any element
    // implementing binary search algo
    
    static char nextGreatestLetter(char[] letters,char target)
    {
        //no need to check for ascending or descending as it is given in the question
        int start = 0;
        int end = letters.length - 1; //imp : -1 karna
        if (target==letters[letters.length - 1]||target>letters[letters.length - 1])
        {
            return letters[0];
        }

        while(start<=end)
        {
            //find the middle element
//            int middle = (start+end)/2;
            /* might be possible that (start+ end) exceeds the range of int in JAVA
             * hence it may give you some error
             * Hence a better way to find mid will be */
            int middle = start + (end - start)/2;
            if (letters[middle]>target)
            {
                end = middle -1;
            }
            else
            {
                start = middle + 1;
            }

        }
        return letters[start];

    }
}
