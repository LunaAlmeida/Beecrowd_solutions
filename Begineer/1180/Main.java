import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        int N,X[], menor = 0, posicao = 0;

        Scanner input = new Scanner(System.in);
        N = input.nextInt();
        X = new int[N];

        for(int i = 0; i < N; i++)
        {
            X[i] = input.nextInt();
            if(X[i] < menor || i == 0)
            {
                menor = X[i];
                posicao = i;
            }
        }

        System.out.println("Menor valor: " + menor);
        System.out.println("Posicao: " + posicao);

        if(input != null)
        {
            input.close();
        }
    }
 
}