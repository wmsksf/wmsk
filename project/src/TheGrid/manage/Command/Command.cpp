
#include "Command.h"

Command::Command(const std::string &name, const std::string &usage,
				 TheGrid* theGrid)

	:name(name), usage(usage), theGrid(theGrid) {}

bool Command::matches(const std::string& name)
{
	return this->name.compare(name) == 0;
}

const std::string &Command::getUsage() const
{
    return usage;
}