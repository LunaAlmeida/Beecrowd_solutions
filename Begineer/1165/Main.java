import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static boolean itIsPrime(int number)
    {
        int aux=0;
        boolean prime = false;
        for(int i = 1; i <= number; i++)
        {
            if((number%i) == 0)
            {
                aux++;
            }
        }
        if(aux == 2)
        {
            prime = true;
        }
        return prime;
    }
    public static void main(String[] args) throws IOException {
        int quantity, number;

        Scanner input = new Scanner(System.in);
        
        quantity = input.nextInt();

        for(int i = 0; i < quantity; i++){
            number = input.nextInt();

            if(itIsPrime(number))
            {
                    System.out.println(number + " eh primo");
            }else{
                System.out.println(number + " nao eh primo");
            }

        }

        if(input != null)
        {
            input.close();
        }

    }

}