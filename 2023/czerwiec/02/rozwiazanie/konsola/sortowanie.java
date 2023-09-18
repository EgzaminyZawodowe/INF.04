import java.util.Random;

public class sortowanie
{
    public static void fill(int[] arr, int max)
    {
        Random rnd = new Random();
        for (int i = 0; i < arr.length; i++)
        {
            arr[i] = rnd.nextInt(max + 1);
        }
    }
    public static void sort(int[] arr)
    {
        for(int i = 0; i < arr.length; i++)
        {
            boolean flag = false;
            for(int j = 0; j < arr.length-i-1; j++)
            {
                if (arr[j] > arr[j+1])
                {
                    int buff = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j]=buff;
                    flag = true;
                }
            }
            if (!flag)
            {
                break;
            }
        }
    }
    public static void print(int[] arr)
    {
        System.out.println("Wynik sortowania bąbelkowego:");
        System.out.print(arr[0]);
        for (int i = 1; i < arr.length; i++)
        {
            System.out.print(", " + arr[i]);
        }
    }
    public static void main(String[] args)
    {
        int[] nums = new int[100]; 

        fill(nums, 100);
        sort(nums);
        print(nums);
    }
}