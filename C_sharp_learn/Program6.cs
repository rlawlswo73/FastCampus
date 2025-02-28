using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_sharp_learn // 추상 키워드 abstrack
{
    public abstract class Monster
    {
        public abstract void Attack();
    }

    public class Ork : Monster
    {
        public override void Attack()
        {
            Console.WriteLine("오크 공격");
        }
    }

    class Program6
    {
        static void Main(string[] args)
        {

            /* 추상 클래스는 그 인스턴스를 사용할 수 없습니다. */
            // Monster monster = new Monster();
            // monster.Attack();
            Ork ork = new Ork();
            ork.Attack();
            Console.ReadLine();
        }
    }
}
