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
        int num,  aux = 0, aux_1 = 0, resposta = 1;

        Scanner input = new Scanner(System.in);
        num = input.nextInt();
        aux_1 = num;
        while(aux != num){
            resposta *= aux_1;
            aux_1 -= 1;  
            aux++;
        }

        System.out.println(resposta);
        if(input != null)
        {
            input.close();
        }
 
    }
 
}