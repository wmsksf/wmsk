
#ifndef NONO_BATTLEARENA_H
#define NONO_BATTLEARENA_H

#include <vector>
#include "../../entity/Living/Monster/Monster.h"
#include "../../entity/Living/Hero/Hero.h"
#include "../../entity/Spell/Spell.h"

class createMonsters;

class BattleArena
{
private:
	int rounds;

    createMonsters createMonsters;
	int monsterCount;

    std::vector<Hero*> heroes;
	int heroCount;

    void heroRound(Hero* hero);
    void monsterRound(Monster* monster);

    bool isFinished();

    void reward();
	void defeat();
	int victors();

    void displayBattleInfo();

	void spellCast(Hero* hero, Spell* spell, Monster* monster);

	void attack(Hero* hero, Monster* monster);

	void usePotion(Hero* hero, Potion* potion);

public:
    BattleArena();

    void start();
};

#endif //NONO_BATTLEARENA_H