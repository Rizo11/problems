namespace Route256;

public class Program1
{
    static void Main1(string[] args)
    {
        int t = int.Parse(Console.ReadLine());
        while(t-- != 0)
        {
            Console.ReadLine();
            int[] nq = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            Cupe[] poezd = new Cupe[nq[0]];
            //while(nq[0]-- != 0)
            //    poezd[nq[0]] = new Cupe();
            for (int i = 0; i < nq[1]; i++)
            {
                var a = Console.ReadLine();
                int[] request = a.Split(' ').Select(int.Parse).ToArray();
                switch (request[0])
                {
                    case 1:
                        var cupe = (request[1]+1) / 2 - 1;
                        if (poezd[cupe] == null)
                            poezd[cupe] = new Cupe();
                        if (poezd[cupe].Assign(request[1]%2))
                        {
                            System.Console.WriteLine("SUCCESS");
                        }
                        else
                            System.Console.WriteLine("FAIL");
                        break;
                    case 2:
                        cupe = (request[1] + 1) / 2 - 1;
                        if (poezd[cupe] == null)
                            poezd[cupe] = new Cupe();
                        if (poezd[cupe].isEmpty)
                        {
                            System.Console.WriteLine("FAIL");
                        }
                        else if(poezd[cupe].seats[request[1] % 2])
                        {
                            System.Console.WriteLine("SUCCESS");
                            poezd[cupe].seats[request[1] % 2] = false;
                            if (!poezd[cupe].seats[0] && !poezd[cupe].seats[1])
                                poezd[cupe].isEmpty = true;
                        }
                        else
                            System.Console.WriteLine("FAIL");
                        break;
                    case 3:
                        bool isFail = true;
                        for (int j = 0; j < poezd.Length; j++)
                        {
                            if (poezd[j] == null)
                                poezd[j] = new Cupe();
                            if (poezd[j].isEmpty)
                            {
                                System.Console.WriteLine($"SUCCESS {2*j+1}-{2*j+2}");
                                poezd[j].seats[0] = true;
                                poezd[j].seats[1] = true;
                                poezd[j].isEmpty = false;
                                isFail = false;
                                break;
                            }
                        }
                        if(isFail)
                            System.Console.WriteLine("FAIL");
                        break;
                }
            }
            System.Console.WriteLine();
        }

    }

}

public class Cupe
{
    public bool isEmpty = true;
    public bool[] seats = new bool[2] {false, false};
    public bool Assign(int a)
    {
        if(!seats[a])
        {
            seats[a] = true;
            isEmpty = false;
            return true;
        }
        else
            return false;
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



// problem C
// int t = int.Parse(Console.ReadLine());
// while(t-- != 0)
// {
//     Console.ReadLine();
//     var dimention = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
//     int[,] array = new int[dimention[0], dimention[1]];
//     for(int i = 0; i < dimention[0]; i++)
//     {
//         var line = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
//         for(int j = 0; j < dimention[1]; j++)
//         {
//             array[i, j] = line[j];
//         }
//     }
//     int k = int.Parse(Console.ReadLine());
//     var kArray = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
//     foreach (int item in kArray)
//     {
//         for(int i = 0; i < dimention[0]; i++)
//         {
//             var current = array[i, item-1];
//             for (int j = i+1; j < dimention[0]; j++)
//             {
//                 if (current > array[j, item - 1])
//                 {
//                     for (int a = 0; a < dimention[1]; a++)
//                     {
//                         int tmp = array[i, a];
//                         array[i, a] = array[j, a];
//                         array[j, a] = tmp;
//                     }
//                     current = array[j, item - 1];
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < dimention[0]; i++)
//     {
//         for (int j = 0; j < dimention[1]; j++)
//         {
//             System.Console.Write(array[i, j]+" ");
//         }
//         System.Console.Write("\n");
//     }

// }



// D
// int t = int.Parse(Console.ReadLine());
// while(t-- != 0)
// {
//     int n = int.Parse(Console.ReadLine());
//     List<string> passwords = new();
//     for(int i = 0; i < n; i++)
//     {
//         string currentPassword = Console.ReadLine().ToUpper();
//         if(passwords.Contains(currentPassword))
//         {
//             System.Console.WriteLine("NO");
//             continue;
//         }
//         if(currentPassword.Length > 24 || currentPassword.Length < 2)
//         {
//             System.Console.WriteLine("NO");
//             continue;
//         }
//         if(currentPassword[0] == '-')
//         {
//             System.Console.WriteLine("NO");
//             continue;
//         }
//         var symbols = new[] { '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '+', '=', '{', '}', '[', ']', '|', ':', ';', '"', '\'', '<', '>', '?', '/', '.', ',', '`', '~', ' '};
//         if(currentPassword.ToCharArray().Intersect(symbols).Count() > 0)
//         {
//             System.Console.WriteLine("NO");
//             continue;
//         }
//         passwords.Add(currentPassword);
//         System.Console.WriteLine("YES");
//     }
//     System.Console.WriteLine();
// }