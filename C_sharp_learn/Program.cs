using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Example1
{
    class Example
    {
        public static string data = "Example 1";
    }
}

namespace Example2
{
    class Example
    {
        public static string data = "Example 2";
    }
}

namespace C_sharp_learn
{
    enum Color { BLACK, BLUE, RED, GREEN }; // 열거형

    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World");
            Console.WriteLine(Example1.Example.data);
            Console.WriteLine(Example2.Example.data);

            Color color = Color.BLUE;
            if(color == Color.BLUE)
            {
                Console.Write("파란색입니다.");
            }
            else {
                Console.Write("파란색이 아닙니다.");
            }

            Console.ReadLine();
        }
    }
}
