//
// Created by admntiasf on 18/1/2018.
//

#include "Exoskeleton.h"

Exoskeleton::Exoskeleton(const std::string &name, int level,
                         int hp, int minDamage, int maxDamage,
                         int defense, double dodgeProbability)

                        :Monster(name, level, hp,
                                 minDamage, maxDamage,
                                 defense, dodgeProbability) {}