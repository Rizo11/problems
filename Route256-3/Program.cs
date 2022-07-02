using System.Text;

namespace Route256;

public class Program
{
    public static void Main()
    {
        int t = int.Parse(Console.ReadLine());
        while(t-- != 0)
        {
            Console.ReadLine();
            int n = int.Parse(Console.ReadLine());
            Dictionary<string, string[]> modules = new();
            while(n-- != 0)
            {
                // Reading modules
                string[] currentModule = Console.ReadLine().Split(':');
                modules.Add(currentModule[0], currentModule[1].Length > 0 ? currentModule[1].Split(' ') : null);
            }
            int request = int.Parse(Console.ReadLine());
            Dictionary<string, bool> compiled = new();
            while (request-- != 0)
            {
                // Reading requests
                List<string> answer = new();
                string currentRequest = Console.ReadLine();
                if(!compiled.Keys.Contains(currentRequest))
                {
                    // compile and add to compiled
                    if (modules[currentRequest] != null)
                    {
                        foreach (var dependance in modules[currentRequest])
                        {
                            if (dependance != "")
                                Compiler(modules, dependance, answer, compiled);
                        }
                    }
                    compiled.Add(currentRequest, true);
                    answer.Add(currentRequest);
                }
                else
                {
                    System.Console.WriteLine(0);
                    continue;
                }
                System.Console.WriteLine($"{answer.Count} {string.Join(" ", answer)}");
            }

        }
    }

    public static void Compiler(Dictionary<string, string[]> modules, string currentModule, List<string> returnString, Dictionary<string, bool> compiled)
    {
        if(!compiled.Keys.Contains(currentModule))
        {
            if(modules[currentModule] == null)
            {
                compiled.Add(currentModule, true);
                returnString.Add(currentModule);
                return;
            }
            else
            {
                foreach (var dependance in modules[currentModule])
                {
                    if (dependance != "")
                        Compiler(modules, dependance, returnString, compiled);
                }
                compiled.Add(currentModule, true);
                returnString.Add(currentModule);
            }
        }
    }
}