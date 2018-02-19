
#include "HeroPartyListCommand.h"
#include "../../TheGrid.h"


HeroPartyListCommand::HeroPartyListCommand()
        :Command("displayHeroes", "[displayHeroes] Commands to display heroes' names") {}

bool HeroPartyListCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    theGrid->getParty()->displayParty();

    return true;
}