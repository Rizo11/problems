using System.Text;
using System.Text.RegularExpressions;

namespace Route256;

public class Program
{
    public static void Main()
    {
        ulong[] prosTask = Console.ReadLine().Split(' ').Select(a => ulong.Parse(a)).ToArray();
        List<ulong> prosEnergy = Console.ReadLine().Split(' ').Select(a => ulong.Parse(a)).ToList();
        prosEnergy.Sort();
        ulong[] prosTime = new ulong[prosEnergy.Count()];
        ulong totalEnergy = 0;
        while(prosTask[1]-- != 0)
        {
            ulong[] startDur = Console.ReadLine().Split(' ').Select(a => ulong.Parse(a)).ToArray();
            ulong nOfPros = (ulong)prosEnergy.Count();
            for (int i = 0; i < (int)nOfPros; i++)
            {
                if(prosTime[i] <= startDur[0])
                {
                    totalEnergy += prosEnergy[i] * startDur[1];
                    prosTime[i] += startDur[0] + startDur[1];
                    break;
                }
            }
        }
        Console.WriteLine(totalEnergy);
    }
}