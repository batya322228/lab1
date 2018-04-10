package in;

public class input {
    public static void Input_Array(double array[][], int n){
        for (int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                array[i][j]=((double)(Math.random()*21 -10));
    }

}
