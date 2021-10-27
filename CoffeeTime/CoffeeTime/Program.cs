using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CoffeeTime
{
    class Program
    {
        static void Main(string[] args)
        {
            /* Coffee Time
             * A coffee shop manager is running a promotion and wants to offer a discount for coffee drinks.
             * The program you are given takes the discount value as input and defines a dictionary, 
             * where the names of the coffee drinks are set as keys, and their prices are set as values.
             * Write a program to discount all of the prices and output a new price list in the format shown below.
             * Sample Input 10
             * Sample Output
             * Americano: 45
             * Latte: 63
             * Flat White: 54
             * Espresso: 54
             * Cappuccino: 72
             * Mocha: 81
             */
            int discount = Convert.ToInt32(Console.ReadLine());

            Dictionary<string, int> coffee = new Dictionary<string, int>();
            coffee.Add("Americano", 50);
            coffee.Add("Latte", 70);
            coffee.Add("Flat White", 60);
            coffee.Add("Espresso", 60);
            coffee.Add("Cappuccino", 80);
            coffee.Add("Mocha", 90);

            foreach (KeyValuePair<string, int> entry in coffee)
            {
                Console.WriteLine(entry.Key + ": " + (entry.Value - entry.Value * discount / 100));
            }
        }
    }
}
