using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_sharp_learn
{
    class Stack<T>
    {
        T[] stack;
        int top = -1;
        public Stack()
        {
            stack = new T[100];
        }
        public void Push(T element)
        {
            stack[++top] = element;
        }
        public T Pop()
        {
            return stack[top--];
        }
    }
    class Program3
    {
        static void Main(string[] args)
        {
            Stack<string> stack = new Stack<string>();
            stack.Push("아무개");
            stack.Push("홍길동");
            stack.Push("이순신");
            Console.WriteLine(stack.Pop());
            Console.WriteLine(stack.Pop());
            Console.WriteLine(stack.Pop());

            Stack<int> stackI = new Stack<int>();
            stackI.Push(3);
            stackI.Push(5);
            stackI.Push(7);
            Console.WriteLine(stackI.Pop());
            Console.WriteLine(stackI.Pop());
            Console.WriteLine(stackI.Pop());

            List<int> list = new List<int>();
            list.Add(3);
            list.Add(5);
            list.Add(7);
            for(int i = 0; i < list.Count; i++)
            {
                Console.WriteLine(list[i]);
            }
            Console.ReadLine();
        }
    }
}
