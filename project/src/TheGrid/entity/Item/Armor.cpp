
#include "Armor.h"
#include "../../manage/Random/Utils.h"
#include "../../manage/Random/Random.h"

Armor::Armor(const std::string &name)

        :Item(name, randomInRange(100, 300),
              randomInRange(5, 20)),
         armorPoints(randomInRange(10, 50))
{}

int Armor::getArmorPoints() const
{
    return armorPoints;
}

const std::string &Armor::getDescription()
{
    Item::getDescription();
    //...
}
