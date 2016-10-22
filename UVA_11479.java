import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t, i;
		long a, b, c;
		t = sc.nextInt();
		for (i = 1; i <= t; i++) 
		{
			a = sc.nextLong();
			b = sc.nextLong();
			c = sc.nextLong();
			if (a + b > c && b + c > a && c + a > b) 
			{
				if (a == b && b == c) 
				{
					System.out.println("Case " + i + ": Equilateral");
				} 
				else if (a == b || b == c || c == a) 
				{
					System.out.println("Case " + i + ": Isosceles");
				} 
				else 
				{
					System.out.println("Case " + i + ": Scalene");
				}
			} 
			else 
			{
				System.out.println("Case " + i + ": Invalid");
			}
		}
		sc.close();
	}

}
