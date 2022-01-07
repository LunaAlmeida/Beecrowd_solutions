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

        int gas = 0, alc = 0, die = 0, option;
        boolean flag = true;
        Scanner N = new Scanner(System.in);

        while(flag)
        {
            option = N.nextInt();

            if(option == 1)
            {
                alc++;
            }else if(option == 2)
            {
                gas++;
            }else if(option == 3)
            {
                die++;
            }else if(option == 4)
            {
                flag = false;
            }
        }

        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: " + alc);
        System.out.println("Gasolina: " + gas);
        System.out.println("Diesel: " + die);
    }
 
}