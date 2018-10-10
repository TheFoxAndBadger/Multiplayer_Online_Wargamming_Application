#include "marine.h"
#include "weapon.h"

marine::marine()
{

}

int marine::getBalisticSkill()
{
    return m_balisticSkill;
}

int marine::getToughness()
{
    return m_toughness;
}

int marine::getWounds()
{
    return m_wounds;
}

int marine::getSave()
{
    return m_save;
}

weapon marine::getGetWeapon()
{
    return m_weapon;
}

marine::setGetWeapon(weapon weapon)
{
    m_weapon = weapon;
}

