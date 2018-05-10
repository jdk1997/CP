import java.io.*;
import java.util.*;
public class buggy
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String l = br.readLine();
		int len = Integer.parseInt(l);
		String s = br.readLine();	
		int x = 0, y = 0;
		List pos = new ArrayList<Integer>(); 
		for(int i = 1; i <= len; ++i)
		{
			if(s.charAt(i) == 'U')
			{
				y++;	
			}
			else if(s.charAt(i) == 'D')
			{
				y--;
			}
			else if(s.charAt(i) == 'R')
			{
				x++;
			}
			else if(s.charAt(i) == 'L')
			{
				x--;
			}
			if(x == 0 && y == 0)
			{
				pos.add(i);
			}
		}
		if(x == 0 && y == 0)
		{
			Integer max = Integer.MIN_VALUE;
			for(Integer j: pos)
			{
				if(j > max)
				{
					max = j;
				}
				System.out.println(max);
			}
		}
		else
		{
			System.out.println("0");
		}
	}
}
