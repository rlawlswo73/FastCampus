using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_sharp_learn // 가상 키워드 virtual
{
    public class Monster 
    {
        public string name;
        public virtual void Attack()
        {
            Console.WriteLine("공격 수행");
        }
    }

    public class Ork : Monster
    {
        public override void Attack()
        {
            base.Attack();
            name = "오크 족장";
            Console.WriteLine(name + " : 오크 공격");
        }
    }
    class Program5
    {
        static void Main(string[] args)
        {
            Monster monster = new Monster();
            monster.Attack();
            Ork ork = new Ork();
            ork.Attack();
            Console.ReadLine();
        }
    }
}
