using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
class Solution
{
    static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine()); // the number of temperatures to analyse
        string _line = Console.ReadLine();
        int _index = 0, _min = int.MaxValue;

        if (string.IsNullOrEmpty(_line))
        {
            Console.WriteLine(0);
        }
        else
        {
            string[] inputs = _line.Split(' ');
            for (int i = 0; i < n; i++)
            {
                int t = int.Parse(inputs[i]);
                Console.Error.WriteLine(t);
                if (Math.Abs(t) <= Math.Abs(_min))
                {
                    _index = i;
                    _min = Math.Abs(t) == Math.Abs(_min) ? Math.Max(_min, t) : t;
                }
            }

            // Write an answer using Console.WriteLine()
            // To debug: Console.Error.WriteLine("Debug messages...");

            Console.WriteLine(_min);
        }
    }
}