#ifndef WEAPON_H
#define WEAPON_H
#include <string>


class weapon
{
private:

    int w_range;
    std::string w_type;
    int w_strength;
    int w_ap;
    int w_damage;

public:
    weapon();

    weapon(int range, std::string type, int strength, int ap, int damage);

    int getRange();
    std::string getType();
    int getStrength();
    int getAp();
    int getDamage();

    std::string getAllInfo();



};

#endif //WEAPON_H
