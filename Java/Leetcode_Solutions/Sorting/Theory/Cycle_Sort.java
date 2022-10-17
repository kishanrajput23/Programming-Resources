import java.util.Arrays;

public class Cycle_Sort
{
    public static void main(String[] args)
    {
        int[] arr = {3,1,5,4,2};
        CyclicSort(arr);
        System.out.println(Arrays.toString(arr));
    }
    public static void CyclicSort(int[] arr)
    {
        //we will perform
        //check -> Swap -> Move
        for (int i = 0; i < arr.length-1; i++)
        //we will only move the i forwards when it is at its correct index
        {
            while(arr[arr[i]-1]!=arr[i]) {
                Swap(arr, i, arr[i] - 1);
            }

        }

    }
    public static void Swap(int[] arr,int first,int second)
    {
        int temp = arr[first];
        arr[first]=arr[second];
        arr[second] = temp;
    }
}
