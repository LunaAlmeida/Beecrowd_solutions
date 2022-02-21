import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {
        int A, N, i = 0, sum=0, aux = 0;

        Scanner input = new Scanner(System.in);
        A = input.nextInt();
        N = input.nextInt();
        
        while(N <= 0)
        {
            N = input.nextInt();
        }

        while(i != N){
            aux = A + i;
            sum += aux;
            i++;
        }
        System.out.println(sum);
        if(input != null)
        {
            input.close();
        }
    }

}