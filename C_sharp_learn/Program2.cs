using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_sharp_learn
{
    public class Student
    {
        private int id;
        private string name;
        private int score;
        public Student(int id, string name, int score)
        {
            this.id = id;
            this.name = name;
            this.score = score;
        }
        public void Show()
        {
            Console.WriteLine("학번: " + id);
            Console.WriteLine("이름: " + name);
            Console.WriteLine("점수: " + score);
        }
    }
    class Program2
    {
        static void Main(string []args)
        {
            Student student = new Student(12345678, "아무개", 98);
            student.Show();
            Console.ReadLine();
        }
    }
}
