import Alg.Search;
import in.input;
import out.output;

public class Laba2 {
    public static void main(String[] args) {
        int n = 8;

        double array[][] = new double[n][n];
        input.Input_Array(array,n);
        Search.Func(array,n);
        output.Out_Array(array,n);

    }
}
