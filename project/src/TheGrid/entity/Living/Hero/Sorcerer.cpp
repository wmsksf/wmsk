//
// Created by admntiasf on 18/1/2018.
//

#include "Sorcerer.h"

Sorcerer::Sorcerer(const std::string& name, int hp,
                 int magicPower, int strength,
                 int dexterity, int agility,
                 int magicRegen, int healthRegen)

                 :Hero(name, hp, magicPower, strength,
                       dexterity, agility, magicRegen,
                       healthRegen) {}