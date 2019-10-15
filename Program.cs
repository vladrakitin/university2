using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp2
{
    class Program
    {
        private static string sx1Min;

        static void Main(string[] args)
        {
            Console.Write("Введіть початкове значення X1min:");
            string sx1min = Console.ReadLine();
            double x1Min = Double.Parse(sx1Min);

            Console.Write("Введіть початкове значення X1max:");
            string sx1Max = Console.ReadLine();
            double x1Max = Double.Parse(sx1Min);

            Console.Write("Введіть приріст dx1: ");
            string sdx1 = Console.ReadLine();
            double dx1 = double.Parse(sdx1);

            Console.Write("Введіть початкове значення X2min:");
            string sx2min = Console.ReadLine();
            double x2Min = Double.Parse(sx1Min);

            Console.Write("Введіть початкове значення X2max:");
            string sx2Max = Console.ReadLine();
            double x2Max = Double.Parse(sx1Min);

            Console.Write("Введіть приріст dx2: ");
            string sdx2 = Console.ReadLine();
            double dx2 = double.Parse(sdx2);
            double y;
            double x1 = x1Min;
            double x2;
        }
    }
}
