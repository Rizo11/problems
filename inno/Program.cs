namespace inno;

public class Programm
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        while(t-- != 0)
        {
            int n = int.Parse(Console.ReadLine());
            int sum = 0;
            while (n-- != 0)
            {
                int[] s = Console.ReadLine().Split(' ').Select(x => int.Parse(x)).ToArray();
                sum += 2 * (Math.Abs(s[0]) +  Math.Abs(s[1]));
            }
            Console.WriteLine(sum);
        }
    }
    static void LeftRotate(int[] arr, int n)
    {
        for (int k = 0; k < n; k++)
        {
            int x = arr[0];
            for (int i = 0; i < (arr.Length - 1); i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[(arr.Length - 1)] = x;
        }
    }
        // int size = 5;
        // int rotate = 2;
        // int[] a = new int[size];
        // int[] b = new int[size];
        // int[] c = new int[size];
        // for (int i = 0; i < size; i++)
        // {
        //     a[i] = i;
        //     b[i] = i;
        // }
        // LeftRotate(a, rotate);
        // for (int i = 0; i < a.Length; i++)
        // {
        //     Console.Write(a[i] + " ");
        // }
        // System.Console.WriteLine();
        // LeftRotate(b, 1);
        // for (int i = 0; i < b.Length; i++)
        // {
        //     Console.Write(b[i] + " ");
        // }
        // System.Console.WriteLine();
        // for (int i = 0; i < size; i++)
        // {
        //     c[i] = a[i] + b[i];
        // }
        // for (int i = 0; i < c.Length; i++)
        // {
        //     Console.Write(c[i] + " ");
        // }
        // System.Console.WriteLine();
        // System.Console.WriteLine(c.Max());
        // Console.ReadKey();
}