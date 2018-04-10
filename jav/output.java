package out;

public class output 
{
    public static void Out_Array(double array[][], int n) 
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                System.out.format("%5.2f   ", array[i][j]);
            System.out.println();
        }
    }

}

