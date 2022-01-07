import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        int grenal = 0, inter = 0, gremio = 0, counter = 1;
        int inter_win = 0, gremio_win = 0, draw = 0;
        boolean flag = true;

        Scanner N = new Scanner(System.in);

        System.out.println("Novo grenal (1-sim 2-nao)");

        inter = N.nextInt();
        gremio = N.nextInt();
        
        grenal = N.nextInt();

        while (flag)
        {
            if(inter > gremio)
            {
                inter_win++;
            }else if(gremio > inter){
                gremio_win++;
            }else{
                draw++;
            }
            
            inter = N.nextInt();
            gremio = N.nextInt();
            
            counter++;
            System.out.println("Novo grenal (1-sim 2-nao)");
            grenal = N.nextInt();
            
            if(grenal == 2)
            {
                if(inter > gremio)
                {
                    inter_win++;
                }else if(gremio > inter){
                    gremio_win++;
                }else{
                    draw++;
                }
                flag = false;
            }

        }

        System.out.println(counter + " grenais");
        System.out.println("Inter:" + inter_win);
        System.out.println("Gremio:" + gremio_win);
        System.out.println("Empates:" + draw);
        
        if(inter > gremio)
        {
            System.out.println("Inter venceu mais");
        }else if(gremio > inter){
            System.out.println("Gremio venceu mais");
        }else{
            System.out.println("Não houve vencedor");
        }
    }
}