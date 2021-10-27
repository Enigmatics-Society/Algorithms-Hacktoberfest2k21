using WarriorWars.Enum;
namespace WarriorWars.Equipment
{
    class Armor
    {
        private const int GOOD_GUY_ARMOR=5;
        private const int BAD_GUY_ARMOR=5;
        private int armorPoints;
        public int ArmorPoints { get { return armorPoints; } }
        public Armor(Faction faction)
        {
            switch (faction)
            {
                case Faction.GoodGuy:
                    armorPoints = GOOD_GUY_ARMOR;
                    break;
                case Faction.BadGuy:
                    armorPoints = BAD_GUY_ARMOR;
                    break;


                default:
                    break;
            }
        }
    }
}