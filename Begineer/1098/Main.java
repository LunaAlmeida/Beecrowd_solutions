import java.io.IOException;
import java.math.BigDecimal;

public class Main {

    public static void main(String[] args) throws IOException {
        BigDecimal num_1 = new BigDecimal("0");
        BigDecimal num_2 = new BigDecimal("1");

        float I = 0;
        int count = 0;

        while(I <= 2.2)
        {
            if(((I - (int)I) == 0) || I > 2)
            {
                System.out.println("I=" + num_1.toBigInteger() + " J=" + num_2.toBigInteger());
            }else
            {
                System.out.println("I=" + num_1.toString() + " J=" + num_2.toString());
            }
            
            num_2 = num_2.add(new BigDecimal("1"));
            count++;
            if(count == 3)
            {
                I += 0.2;
                num_2 = num_2.subtract(new BigDecimal("3"));
                num_1 = num_1.add(new BigDecimal("0.2"));
                num_2 = num_2.add(new BigDecimal("0.2"));

                count = 0;
            }
            
        }
    }
}