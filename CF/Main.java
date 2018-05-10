import java.io.*;
import java.util.*;

public class Main
{
	public static void main(String[] args)
	{
		InputStream inputStream = System.in;
		OutputStream outputStream = System.out;
		InputReader in  = new InputReader(inputStream);
		OutputReader out = new OutputReader(outputStream);
		solve s = new solve();
		s.solver(1, in, out);
		out.close();
	}
}

static class solve
{
	public void solver(int test, InputReader in, PrintWriter out)
	{
		int n = in.nextInt();
		int[] t = new int[n];
		int[] ans = new int[3];
		boolean flg = 0;
		for(int i = 0; i < n; ++i)
		{
			t[i] = in.nextInt();
		}
		for(int j = 0; j < n; ++j)
		{
			if(t[j] + t[j + 1] == t[j + 2])
			{
				flg = 1;
				ans[0] = t[j + 2];
				ans[1] = t[j + 1];
				ans[2] = t[j];
				break;
			}
		}
		if(flg == 1)
		{
			for(int k : ans)
			{
				out.print(ans[k]);
				out.print(" ");
			}
		}
		else
		{
			out.println("-1");
		}

	}
}

static class InputReader
{
	public BufferedReader reader;
	public StringTokenizer tokenizer;

	public InputReader(InputStream stream)
	{
		reader = new BufferedReader(new InputStreamReader(stream), 32768);
		tokenizer = null;
	}
	public String next()
	{
		while(tokenizer == null || !tokenizer.hasMoreTokens())
		{
			try
			{
				tokenizer = new StringTokenizer(reader.readLine());
			}
			catch(IOException e)
			{
				throw new RuntimeException(e);
			}
		}
		return tokenizer.nextToken();
	}
	public int nextInt()
	{
		return Integer.parseInt(next());
	}
}
