
#include "MoneyofHeroCommand.h"
#include "../../TheGrid.h"

MoneyofHeroCommand::MoneyofHeroCommand()
                    :Command("moneyof <hero_name>", "[moneyof <hero_name>] Command showing the amount of money a hero has") {}

bool MoneyofHeroCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() != 1)
    {
        std::cout << "Invalid Usage : " <<  getUsage() << std::endl;
        return false;
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(hero == nullptr)
    {
        std::cout << "Unknown hero " << args[0] << std::endl;
        return false;
    }

    std::cout << args[0] << " has : " << hero->getMoney() << " money" << std::endl;

    return true;
}