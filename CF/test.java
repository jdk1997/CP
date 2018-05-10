import java.io.*;
import java.util.*;
public class test
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = 0;
		ArrayList even = new ArrayList<Integer>();
		ArrayList odd = new ArrayList<Integer>();
		String x = br.readLine();
		n = Integer.parseInt(x);
		int[] nums = new int[n];
		String[] strNums = new String[n];
		strNums = br.readLine().split("\\s");
		for(int i = 0; i < strNums.length(); ++i)
		{
			nums[i] = Integer.parseInt(strNums[i]);
		}
		for(int i:nums)
		{
			if(nums[i] % 2 == 0)
			{
				even.add(nums[i]);
			}
			else if(nums[i] % 2 == 1)
			{
				odd.add(nums[i]);
			}
		}
		if(even.size() == 1)
		{
			System.out.println(even.get(0));
		}
		else if(odd.size() == 1)
		{
			System.out.println(odd.get(0));
		}
	}
}
