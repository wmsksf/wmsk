//
// Created by admntiasf on 18/1/2018.
//

#include "Sorcerer.h"

Sorcerer::Sorcerer(std::string name, int lvl,
                   int power, int magic,
                   int strength, int dexterity,
                   int agility, int money,
                   int experience)

                   :Hero(name, lvl, power, magic,
                         strength, dexterity,
                         agility, money, experience) {}