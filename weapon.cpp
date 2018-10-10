#include "weapon.h"

weapon::weapon()
{

}

weapon::weapon(int range, std::string type, int strength, int ap, int damage)
{
    w_range = range;
    w_type = type;
    w_strength = strength;
    w_ap = ap;
    w_damage = damage;
}

int weapon::getRange()
{
    return w_range;
}

std::string weapon::getType()
{
    return w_type;
}

int weapon::getStrength()
{
    return w_strength;
}

int weapon::getAp()
{
    return w_ap;
}

int weapon::getDamage()
{
    return w_damage;
}

std::string weapon::getAllInfo()
{
    return std::to_string(w_range) + " , " +
            w_type + " , " +
            std::to_string(w_strength) + " , " +
            std::to_string(w_ap) + " , " +
            std::to_string(w_damage);
}



