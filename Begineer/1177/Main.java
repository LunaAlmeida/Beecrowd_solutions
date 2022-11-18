import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        int N[], T, aux = 0;

        Scanner input = new Scanner(System.in);
        N = new int[1000];

        T = input.nextInt();
        
        for(int i = 0; i < 1000; i++)
        {
            N[i] =  aux;
            if(aux != (T - 1))
            {
                aux++;
            }else
            {
                aux = 0;
            }
            
            System.out.println("N[" + i + "]" + " = " + N[i]);
        }
        
        if(input != null)
        {
            input.close();
        }
    }

}