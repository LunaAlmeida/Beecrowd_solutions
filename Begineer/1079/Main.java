import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int quant;
        float N1, N2, N3;
        Scanner N = new Scanner(System.in);
        quant = N.nextInt();
        for(int i = 1; i <= quant; i++)
        {
            N1 = N.nextFloat();
            N2 = N.nextFloat();
            N3 = N.nextFloat();

            System.out.printf("%.1f \n", (N1 * 2 + N2 * 3 + N3 * 5)/ 10);
            
        }
        if(N != null)
        {
            N.close();
        }
    }
}
