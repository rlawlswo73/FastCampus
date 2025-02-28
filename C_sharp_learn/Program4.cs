using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_sharp_learn // dictionary
{
    class Program4
    {
        static void Main(string[] args)
        {
            Dictionary<string, int> students = new Dictionary<string, int>();
            students["아무개"] = 100;
            students["홍길동"] = 95;
            students["이순신"] = 98;
            if(students.ContainsKey("아무개"))
            {
                Console.WriteLine("아무개 성적: " + students["아무개"] + "점");
            }
            foreach(KeyValuePair<string, int> data in students)
            {
                Console.WriteLine(data.Key + " : " + data.Value);
            }
            Console.ReadLine();
        }
    }
}
