import java.util.Arrays;



public class Selection_Sort
{
    public static void main(String[] args)
    {
        int[] arr = {1,2,-1,0};
        Selection_Sort1(arr);
        System.out.println(Arrays.toString(arr));
    }
    public static void Selection_Sort1(int[] arr)
    {
        for (int i = 0; i < arr.length - 1; i++) {
            //find the max item in the remaining array and swap the item for
            //its correct place
            int last_index = arr.length -i - 1;
            //swap this index with
            int max = getMaxIndex(arr, 0, last_index);

            Swap(arr,max,last_index);
        }
    }
    public static void Swap(int[] arr,int first,int second)
    {
        int temp = arr[first];
        arr[first]=arr[second];
        arr[second] = temp;
    }
    public static int getMaxIndex(int[] arr,int start_index,int last_index)
    {
        int max = start_index;
        for (int i = start_index; i <= last_index; i++)
        {
            if (arr[i]>arr[max])
            {
                max = i;
            }
        }
        return max;
        //we have to return the index and not the value
    }
}
