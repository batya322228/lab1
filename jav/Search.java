package Alg;

public class Search 
{
    public static void Func(double array[][], int n)
    {
        
        double min;
        double max;
        int minc = 0;
        int maxc = 0;

        min = array[0][0];
        max = array[0][0];
        
        for (int i = 1; i < n; i++) 
        {
            if(array[i][i] > max)
            {
                max = array[i][i];
                maxc = i;
            }
            if(array[i][i] <= min)
            {
                min = array[i][i];
                minc = i;
            }
        }
        
        System.out.printf("\nFirst max value was found at ["+maxc+"]["+maxc+"] = "+ max);
        System.out.printf("\nFirst max value was found at ["+minc+"]["+minc+"] = "+ min);
        System.out.println("-------------------------");
        array[minc][minc] = max;
        array[maxc][maxc] = min;

    }

}
