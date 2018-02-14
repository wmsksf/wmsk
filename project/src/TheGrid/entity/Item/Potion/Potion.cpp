
#include "Potion.h"
#include "../../../manage/Random/Random.h"

Potion::Potion(const std::string &name,
               int price)

        :Item(name, "Potion", price,
              randomInRange(5, 12)) {}

void Potion::boost(Hero *hero) {}
Item* Potion::clone() {}