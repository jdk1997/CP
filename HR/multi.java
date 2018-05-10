import java.util.*;

public class multi
{
    public static void main(String[] args)
    {
        int t = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        int ans = 0;
        int x = 0;
        for(int i = 0; i < t; ++i)
        {
            ans = 0;
            int n = sc.nextInt();
            x = (n - 1) / 3;
            ans = (3 * x * (x + 1)) >> 1;
            x = (n - 1) / 5;
            ans = ans + (5 * x * (x + 1)) >> 1;
            x = (n - 1) / 15;
            ans = ans - (15 * x * (x + 1)) >> 1;
            System.out.println(ans);
        }
    }
}