import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;

public class UVA_495 {
	//need to change class name to Main for not getting any Compilation Error //
	public static void main(String[] args)
	{
		Scanner scan=new Scanner(System.in);
		int n,i,m;
		BigInteger sum;
		while(scan.hasNext())
		{
			n=scan.nextInt();
			m=n;
			n-=2;
			if(m==0)
				System.out.println("The Fibonacci number for "+m+" is 0");
			else if(m==1 ||m==2)
			{
				System.out.println("The Fibonacci number for "+m+" is 1");
			}
			else
			{
			BigInteger[] a=new BigInteger[n];
			BigInteger[] b=new BigInteger[n];
			Arrays.fill(a,BigInteger.ZERO); //Same as memset() in C/C++, It fills every index to zero//
			Arrays.fill(b, BigInteger.ZERO);
	        a[0]=BigInteger.ONE; // Set 0th index to 1 //
	        b[0]=BigInteger.ONE;
	        for(i=1;i<n;i++)
	        {
	            a[i]=a[i-1].add(b[i-1]);
	            b[i]=a[i-1];
	        }
	        sum=a[n-1].add(b[n-1]);
	        System.out.println("The Fibonacci number for "+m+" is "+sum);
			}
		}
	}
}
