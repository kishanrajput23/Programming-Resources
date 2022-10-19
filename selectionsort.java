//Java program of selection Sort
public class Main {  
    public static void selectionSort(int[] pr){  
        for (int i = 0; i < pr.length - 1; i++)  
        {  
            int index = i;  
            for (int j = i + 1; j < pr.length; j++){  
                if (pr[j] < pr[index]){  
                    index = j;//searching for lowest index  
                }  
            }  
            int smallerno = pr[index];   
            pr[index] = pr[i];  
            pr[i] = smallerno;  
        }  
    }  
       
    public static void main(String a[]){  
        int[] pr = {9,14,3,2,43,11,58,22};  
        System.out.println("Before Selection Sort");  
        for(int i:pr){  
            System.out.print(i+" ");  
        }  
        System.out.println();  
          
        selectionSort(pr);//sorting array using selection sort  
         
        System.out.println("After Selection Sort");  
        for(int i:pr){  
            System.out.print(i+" ");  
        }  
    }  
}  
