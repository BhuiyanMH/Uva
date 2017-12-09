import java.util.Scanner;
import java.lang.String;
import java.math.BigInteger;

public class Main 
{
	public static void main(String[] args) {
		uva495();
	}
	
	public static void uva495()
	{
		BigInteger fibs[] = new BigInteger[5001];
		
		fibs[0] = new BigInteger("0");
		fibs[1] = new BigInteger("1");
		
		for(int i=2; i<=5000; i++)
		{
			fibs[i] = fibs[i-1].add(fibs[i-2]);
		}
		
		Scanner scanner = new Scanner(System.in);
		
		while(scanner.hasNext())
		{
			int j = scanner.nextInt();
			
			System.out.println("The Fibonacci number for "+j+" is "+fibs[j]);
		}
		
		return;
		
	}
	
}
