
import java.util.Scanner;

/**
 * countDigit
 */
public class countDigit {

    public static void main(String[] args) {
    System.out.println("Enter a number");    
    try(Scanner s=new Scanner(System.in))
    {
    int n=s.nextInt();
    int cnt=0;
	while(n>0)
	{
		n=n/10;
		cnt+=1;
	}
    
    System.out.println(cnt);
    
    }
}
    
}