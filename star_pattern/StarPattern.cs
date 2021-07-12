using System;
using System.Linq;

public static class Program
{
    public static void Main()
    {
        int iterations = 0;
        int i = 0;
        int size = 15;
        while (iterations < size)
        {
            iterations++;
            if (iterations <= (size / 2))
            {
                i++;
                Console.Write(string.Concat(Enumerable.Repeat(" ", size - i)));
                Console.WriteLine(string.Concat(Enumerable.Repeat("* ", i)));
            }
            else
            {
                i--;
                Console.Write(string.Concat(Enumerable.Repeat(" ", size - i)));
                Console.WriteLine(string.Concat(Enumerable.Repeat("* ", i)));
            }
        }
    }
}