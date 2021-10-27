using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DrawingApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Drawing Application
             * You are creating a drawing application and currently have only 1 tool - a pencil. 
             * You want to add brush and spray to the drawing toolbar.
             * The program you are given declares an IDraw interface with the StartDraw() method,
             * and class Draw, which performs pencil drawing by implementing the IDraw interface. 
             * It outputs "Using pencil".
             * Complete the given Brush and Spray classes by
             * - inheriting them from class Draw
             * - implementing the StartDraw() method for each tool, in order to output
             * "Using brush" for Brush, or
             * "Using spray" for Spray.
             * The Draw objects and their method calls are provided in Main().
             */
            Draw pencil = new Draw();
            Draw brush = new Brush();
            Draw spray = new Spray();

            pencil.StartDraw();
            brush.StartDraw();
            spray.StartDraw();

        }
    }
    public interface IDraw
    {
        void StartDraw();
    }

    class Draw : IDraw
    {
        public virtual void StartDraw()
        {
            Console.WriteLine("Using pencil");
        }
    }

    //inherit this class from the class Draw
    class Brush : Draw
    {
        //implement the StartDraw() method
        public override void StartDraw()
        {
            Console.WriteLine("Using brush");
        }

    }

    //inherit this class from the class Draw
    class Spray : Draw
    {
        //implement the StartDraw() method
        public override void StartDraw()
        {
            Console.WriteLine("Using spray");
        }

    }
}
