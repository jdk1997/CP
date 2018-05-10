import java.io.*;
import java.util.*;
import java.lang.*;
public class petya
{
	public static void main(String[] args) throws IOException
	{
		int flg = 0;
		String str1, str2, a, b;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		str1 = br.readLine();
		str2 = br.readLine();
		StringBuilder sb1 = new StringBuilder(str1);
		StringBuilder sb2 = new StringBuilder(str2);
		for(int i = 0; i < sb1.length(); i++)
		{
			char x = sb1.charAt(i);
			char y = sb2.charAt(i);
			if((int)x >= (int)('A') && (int)x <= (int)('Z'))
			{
				sb1.setCharAt(i, (char)((int)x + 32));
			}
			else if((int)y >= (int)('A') && (int)y <= (int)('Z'))
			{
				sb2.setCharAt(i, (char)((int)y + 32));
			}
		}
		a = sb1.toString();
		b = sb2.toString();
		System.out.println(a);
		System.out.println(b);
		if(a.compareTo(b) == 0)
		{
			System.out.println("0");	
		}
		else if(a.compareTo(b) >= 1)
		{
			System.out.println("1");
		}
		else if(a.compareTo(b) <= -1)
		{
			System.out.println("-1");
		}
		
	}
}