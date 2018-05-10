import java.util.*;

public class prime
{
    public static void main(String[] args)
    {
        int t = 0; 
        ArrayList<boolean> pri = new ArrayList<boolean>[10010];
        Collections.fill(pri, true);
        
        for(int i = 2; i * i <= 10010; ++i)
        {
            if(pri.get(i) == true)
            {
                for(int j = i * 2; j <= 10010; j += i)
                {
                    pri.add(j, false);
                }
            }
        }
        
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        for(int i = 0; i < t; ++i)
        {
            int n = sc.nextInt();
            System.out.println(pri.get(n + 2));
        }
    }
}