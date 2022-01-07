import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
    public static void main(String[] args) throws IOException {
        int num;

        Scanner N = new Scanner(System.in);

        num = N.nextInt();

        for(int i = 1; i <= num; i++)
        {
            System.out.println(i + " " + String.format("%.0f", Math.pow(i, 2)) + " " + String.format("%.0f", Math.pow(i, 3)));

            System.out.println(i + " " + String.format("%.0f", Math.pow(i, 2) + 1) + " " + String.format("%.0f", Math.pow(i, 3) + 1));
            
        }

        if(N != null)
        {
            N.close();
        }

    }
}