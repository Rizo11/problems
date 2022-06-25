namespace Route256;

public class Program
{
    static void Main(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        while(t-- != 0)
        {
            Console.ReadLine();
            var dimention = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int[,] array = new int[dimention[0], dimention[1]];
            for(int i = 0; i < dimention[0]; i++)
            {
                var line = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                for(int j = 0; j < dimention[1]; j++)
                {
                    array[i, j] = line[j];
                }
            }
            int k = int.Parse(Console.ReadLine());
            var kArray = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            foreach (int item in kArray)
            {
                for(int i = 0; i < dimention[0]; i++)
                {
                    var current = array[i, item-1];
                    for (int j = i+1; j < dimention[0]; j++)
                    {
                        if (current > array[j, item - 1])
                        {
                            for (int a = 0; a < dimention[1]; a++)
                            {
                                int tmp = array[i, a];
                                array[i, a] = array[j, a];
                                array[j, a] = tmp;
                            }
                            current = array[j, item - 1];
                        }
                    }
                }
            }
            for (int i = 0; i < dimention[0]; i++)
            {
                for (int j = 0; j < dimention[1]; j++)
                {
                    System.Console.Write(array[i, j]+" ");
                }
                System.Console.Write("\n");
            }

        }
    }

}

// 1 st problem
// int t = int.Parse(Console.ReadLine());
// for (int i = 0; i < t; i++)
// {
//     int[] twoNums = Console.ReadLine().Split().Select(int.Parse).ToArray();
//     System.Console.WriteLine(twoNums[0]+twoNums[1]);
// }

// 2nd problem
// int t = int.Parse(Console.ReadLine());
// while(t-- != 0)
// {
//     int nOfProducts = int.Parse(Console.ReadLine());
//     int sum = 0;
//     int[] products = Console.ReadLine().Split(' ').Select(x => int.Parse(x)).ToArray();
//     Dictionary<int, int> productsCount = new Dictionary<int, int>();
//     foreach (int item in products)
//     {
//         if(productsCount.ContainsKey(item))
//         {
//             productsCount[item]++;
//         }
//         else
//         {
//             productsCount.Add(item, 1);
//         }
//     }
//     foreach (var item in productsCount)
//     {
//         sum += ((item.Value%3) * item.Key) + ((int)(item.Value/3) * item.Key * 2);
//     }
//     System.Console.WriteLine(sum);
// }