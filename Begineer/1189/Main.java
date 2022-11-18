import java.io.IOException;
import java.util.Scanner;
import java.util.Locale;
import java.util.Scanner;
import java.lang.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException 
    {
        String O;
        double M[][], soma = 0, media = 0;

        M = new double[12][12];
        Locale.setDefault(Locale.US);
        Scanner input = new Scanner(System.in);
        O = input.nextLine();

        for(int i = 0; i < 12; i++)
        {
            for(int j = 0; j < 12; j++)
            {
                M[i][j] = input.nextFloat();
                if((i > j) && (((i+1 )+ (j+1)) <= 12))
                {
                    soma = soma + M[i][j];
                }
            }
        }

        if(O.contains("S"))
        {
            System.out.printf("%.1f\n", soma);
        }else{
            media = soma / 30;
            System.out.printf("%.1f\n", media);
        }


        if(input != null)
        {
            input.close();
        }
    }
}