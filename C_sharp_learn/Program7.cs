using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_sharp_learn  // 인터페이스
{
    public interface Monster
    {
        void Attack();
        void Defense();
    }

    public class Ork : Monster
    {
        public void Attack()
        {
            Console.WriteLine("오크 공격");
        }

        public void Defense()
        {
            Console.WriteLine("오크 방어");
        }
    }

    class Program7
    {
        static void Main(string[] args)
        {
            Ork ork = new Ork();
            ork.Attack();
            ork.Defense();
            Console.ReadLine();
        }
    }
}
