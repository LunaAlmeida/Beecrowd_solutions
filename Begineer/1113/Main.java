import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        int X, Y;
        Scanner N = new Scanner(System.in);

        X = N.nextInt();
        Y = N.nextInt();

        while(X != Y)
        {
            if(X > Y)
            {
                System.out.println("Decrescente");
            }else if(X < Y)
            {
                System.out.println("Crescente");
            }
            X = N.nextInt();
            Y = N.nextInt();
        }

    if(N != null)
    {
        N.close();
    }
    }
}
