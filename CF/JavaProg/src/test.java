import java.io.*;
import java.util.*;
public class test 
{
	public static void main(String[] args) 
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = 0;
		ArrayList<Integer> even = new ArrayList();
		ArrayList<Integer> odd = new ArrayList();
		String x = br.readLine();
		n = Integer.parseInt(x);
		int[] nums = new int[n];
		String[] strNums;
		strNums = br.readLine().split("\\s");
		for(int i = 0; i < strNums.length; ++i)
		{
			nums[i] = Integer.parseInt(strNums[i]);
		}
		for(int j = 0; j < n; ++j)
		{
			if(nums[j] % 2 == 0)
			{
				even.add(nums[j]);
			}
			else if(nums[j] % 2 == 1)
			{
				odd.add(nums[j]);
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