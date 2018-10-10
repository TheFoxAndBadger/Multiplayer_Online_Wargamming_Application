#ifndef MARINE_H
#define MARINE_H
#include "weapon.h"

class marine
{
private:

    weapon m_weapon;
    int m_balisticSkill = 3;
    int m_toughness = 4;
    int m_wounds = 1;
    int m_save = 3;
public:
    marine();

    int getBalisticSkill();
    int getToughness();
    int getWounds();
    int getSave();
    weapon getGetWeapon();
    setGetWeapon(weapon weapon);
};

#endif // MARINE_H
