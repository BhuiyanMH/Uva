import java.util.Scanner;
import java.lang.String;
import java.math.BigInteger;

import javax.lang.model.element.NestingKind;

public class Main 
{
	public static void main(String[] args) {
		uva424IntegerInquary();
	}
	
	public static void uva424IntegerInquary()
	{
		BigInteger numbers[] = new BigInteger[100];
		
		Scanner scanner = new Scanner(System.in);
		
		int i = 0;
		while (true) {
			
			numbers[i] = scanner.nextBigInteger();
			
			if(numbers[i].compareTo(new BigInteger("0")) == 0)
				break;	
			i++;
		}
		
		BigInteger ansBigInteger = new BigInteger("0");
		
		for(int j = 0; j<i; j++)
		{
			 ansBigInteger = ansBigInteger.add(numbers[j]);
		}
		
		System.out.println(ansBigInteger);
		
	}
	
}
