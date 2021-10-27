using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WarriorWars.Enum;

namespace WarriorWars
{
    class EntryPoint
    {
        static Random rng = new Random();
        static void Main(string[] args)
        {
            Warrior goodGuy = new Warrior("devanshi", Enum.Faction.GoodGuy);
            Warrior badGuy = new Warrior("viranchi", Enum.Faction.BadGuy);

           while((goodGuy.IsAlive && badGuy.IsAlive))
            {
                if(rng.Next(0,10)< 5)
                {
                    goodGuy.Attack(badGuy);
                }
                else
                {
                    badGuy.Attack(goodGuy);
                }
            }
        }
    }
}
