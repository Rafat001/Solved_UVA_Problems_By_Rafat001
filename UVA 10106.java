import java.math.BigInteger;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		BigInteger a,b;
		while(scan.hasNext())
		{
			a=scan.nextBigInteger();
			b=scan.nextBigInteger();
			System.out.println(a.multiply(b));
		}
	}

}
