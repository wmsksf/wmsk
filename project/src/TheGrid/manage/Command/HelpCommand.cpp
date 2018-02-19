
#include "HelpCommand.h"

HelpCommand::HelpCommand()
        :Command("help", "[help] List of commands of the Grid") {}

bool HelpCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    std::cout << "All commands of the Grid :" << std::endl;

    std::vector<Command*>* commands = theGrid->getCommandManager()->getCommands();

    for (std::vector<Command*>::iterator it = commands->begin(); it != commands->end(); it++)
    {
        std::cout << (*it)->getUsage() << std::endl;
    }

    delete commands;

    return true;
}