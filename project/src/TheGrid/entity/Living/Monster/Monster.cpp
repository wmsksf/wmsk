
#include <vector>
#include "Monster.h"
#include "../../../manage/Random/Random.h"
#include "../../Spell/Effect/Effect.h"
#include "../../../manage/Random/Utils.h"

Monster::Monster(const std::string &name, int level)
		:Living(name, level) {}

void Monster::displayStats()
{
	Living::displayStats();

	std::cout << "[" << minDamage << ", " << maxDamage << " damage range]" << std::endl;
	std::cout << "[" << defense << " defense]" << std::endl;
	std::cout << "[" << dodgeProbability << " dodge probability]" << std::endl;
}

int Monster::getMinDamage() const
{
	return minDamage;
}

int Monster::getMaxDamage() const
{
	return maxDamage;
}

int Monster::getDefense() const
{
	return defense;
}

double Monster::getDodgeProbability() const
{
	return dodgeProbability;
}

int Monster::getExperienceWorth()
{
    return 0.10 * experienceForLevelUp(level + 1);
}

int Monster::getMoneyReward()
{
	return 100 + (level * 12);
}
