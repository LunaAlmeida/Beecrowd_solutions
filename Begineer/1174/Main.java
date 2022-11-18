import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        double[] A;

        A = new double[100];
        Scanner input = new Scanner(System.in);

        for(int i = 0; i < 100; i++)
        {
            A[i] = input.nextDouble();
            if(A[i] <= 10)
            {
                System.out.println("A[" + i + "] = " + A[i]);
            }
        }

        
        if(input != null)
        {
            input.close();
        }
    }

}