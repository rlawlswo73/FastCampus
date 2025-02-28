using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_sharp_learn
{
    struct Adder
    {
        public int x, y;
        public Adder(int x, int y)
        {
            this.x = x;
            this.y = y;
        }
        public string GetResult()
        {
            return x + " + " + y + " = " + (x + y);
        }
    }
    class Program1
    {
        static void Main(string[] args)
        {
            Adder adder = new Adder(3, 7);
            Console.WriteLine(adder.GetResult());
            Console.ReadLine();
        }
    }
}
