using System;
using System.Linq;

public static class StarPattern
{
    public static void Main(string[] args)
    {
        int iterations = 0;
        int starCount = 0;
        int size = 15;
        while (iterations < size)
        {
            iterations++;
            if (iterations <= (size / 2))
            {
                i++;
                Console.Write(string.Concat(Enumerable.Repeat(" ", size - starCount)));
                Console.WriteLine(string.Concat(Enumerable.Repeat("* ", i)));

            }
            else
            {
                i--;
                Console.Write(string.Concat(Enumerable.Repeat(" ", size - starCount)));
                Console.WriteLine(string.Concat(Enumerable.Repeat("* ", i)));
            }
        }
    }
}