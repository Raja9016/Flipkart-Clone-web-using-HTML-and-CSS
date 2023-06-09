import java.util.Scanner; 
public class hello
{
    public static void main( String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        try
        {
        if(n==0)
        throw new Exception("Invalid intput");
        else
        System.out.println(n/2);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}