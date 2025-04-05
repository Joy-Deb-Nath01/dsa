import java.util.Scanner;

/**
 * extractionofDigit
 */
public class extractionofDigit {

    public static void main(String[] args) {
        System.out.print("Enter the number:");
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();

        while (a>0)
        {
            int lastdigit=a%10;
            System.out.println(lastdigit);
            a=a/10;    
        }


        s.close();
    }
}