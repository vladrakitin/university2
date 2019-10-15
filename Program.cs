using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Введіть початкове значення Xmin: ");
            string sxMin = Console.ReadLine();
            double xMin = Double.Parse(sxMin);

            Console.Write("Введіть кінцеве значення Xmax: ");
            string sxMax = Console.ReadLine();
            double xMax = Double.Parse(sxMax);

            Console.Write("Введіть приріст dX: ");
            string sdx = Console.ReadLine();
            double dx = double.Parse(sdx);

            double x = xMin;
            double z = xMax;
            
            while (x <= xMax)
            {
                double t = Math.Cos(Math.Log10(3 * xMin / xMax));

                if (Math.Abs(x - xMax - dx) > 0.0001)
                {
                    double y = ((t * t) / (45 + 3 * xMin));
                    Console.WriteLine("x = {0}\t\t y = {1}", xMax, y);
                    x += dx;
                }

                

            }

            Console.ReadKey();
        }


    }
}
