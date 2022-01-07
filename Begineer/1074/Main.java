import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        int N;
        int numbers;
        Scanner number = new Scanner(System.in);
        N = number.nextInt();

        for(int i = 1; i <= N; i++)
        {
            numbers = number.nextInt();
            if(((numbers % 2) == 0) && (numbers > 0))
            {
                System.out.println("EVEN POSITIVE");
            }else if(((numbers % 2) == 0) && (numbers < 0))
            {
                System.out.println("EVEN NEGATIVE");
            }else if(((numbers % 2) != 0) && (numbers > 0))
            {
                System.out.println("ODD POSITIVE");
            }else if(((numbers % 2) != 0) && (numbers < 0))
            {
                System.out.println("ODD NEGATIVE");
            }else
            {
                System.out.println("NULL");
            }
        }

        if(number != null)
        {
            number.close();
        }

    }
}