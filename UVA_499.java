import java.util.Arrays;
import java.util.Scanner;
public class Main {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		String s;
		int i,maxx,k;
		char[] a=new char[50];
		int[] frequency=new int[256];
		while(sc.hasNext())
		{
			k=0;
			maxx=0;
			Arrays.fill(a,(char)200);
			Arrays.fill(frequency,0);
			s=sc.nextLine();
			char[] c=s.toCharArray();
			for(i=0;i<s.length();i++)
			{
				frequency[c[i]]++;
				if((frequency[c[i]]>maxx) &&((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')))
					maxx=frequency[c[i]];
			}
			for(i=0;i<s.length();i++)
			{
				if((frequency[c[i]]==maxx) &&((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')))
				{
					a[k]=c[i];
					k++;
					frequency[c[i]]=0;
				}
			}
			Arrays.sort(a);
			for(i=0;i<k;i++)
			{
					System.out.print(a[i]);
			}
			System.out.println(" "+maxx);
		}
	}
}
