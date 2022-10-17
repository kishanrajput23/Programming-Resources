import java.util.Arrays;

public class Bubble_sort
{
    public static void main(String[] args) {
    int[] arr = {3,1,5,4,2};
    BubbleSort(arr);
        System.out.println(Arrays.toString(arr));
    }
    public static void BubbleSort(int[] arr)
    {
        boolean swapped;
        //run the steps n-1 times for i
        for (int i = 0; i < arr.length-1; i++)
        {
            //ye arr.length "-1 " maine daala hai and not by kunal so agar koi error aati hai then look into it

            swapped = false;
            //for each step the largest item will come at the last index
            for (int j = 1; j < arr.length-i; j++) {
                //swap if the item is smaller than the previous item
                if (arr[j-1]>arr[j]){
                    //then swap the two items
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                    swapped = true;
                }
            }
            if(!swapped)
            {
                break;
            }
            //this means that our array is already sorted so why run it again


        }
    }
}
