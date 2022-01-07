import java.io.IOException;
import java.math.BigDecimal;
import java.util.Scanner;
import java.math.RoundingMode;

public class Main {
    public static void main(String[] args) throws IOException {
        int Num;

        Double X, Y;

        Scanner N = new Scanner(System.in);

        Num = N.nextInt();

        for(int i = 0; i < Num; i++)
        {
            BigDecimal div;
            X = N.nextDouble();
            Y = N.nextDouble();
            BigDecimal num1 = new BigDecimal(X.toString());
            BigDecimal num2 = new BigDecimal(Y.toString());

            if(Y != 0)
            {
                div = num1.divide(num2, 1, RoundingMode.HALF_UP);

                System.out.println(div);
            }else
            {
                System.out.println("divisao impossivel");
            }
            

        }
    
        if(N != null)
        {
            N.close();
        }

    }
}
