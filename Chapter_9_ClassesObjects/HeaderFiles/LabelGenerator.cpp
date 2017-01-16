#include <string>
#include "Chapter_9_ClassesObjects\HeaderFiles\LabelGenerator.h"

LabelGenerator::LabelGenerator()
{
}

LabelGenerator::~LabelGenerator()
{
}

LabelGenerator::LabelGenerator(std::string lblName, int lblIndex)
{
	this->labelIndex = lblIndex;
	this->labelName = lblName;
}

std::string LabelGenerator::nextLabel() {
	std::string index = std::to_string(this->labelIndex);
	this->labelIndex++;
	return (this->labelName + index);
}