import java.util.*;

public class fact
{
    public static long long factorial(long n)
    {
        if(n == 0)
            return 1;
        else if(n == 1)
            return 1;
        else
            return n * factorial(n - 1);
    }

    public static void main(String[] args)
    {
        int t = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(int i = 0; i < t; ++i)
        {
            int n = 0;
            long long ans = 0;
            n = sc.nextInt();
            long long fac = factorial(n);
            while(fac >= 1)
            {
                ans += fac % 10;
                fac = fac / 10;
            }
            System.out.println(ans);
        }
    }
}