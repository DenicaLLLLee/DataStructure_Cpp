#pragma once
#ifndef __labelgenerator_h__
#define __labelgenerator_h__
class LabelGenerator {
private:
	std::string labelName;
	int labelIndex = 0;

public:
	LabelGenerator();
	~LabelGenerator();
	LabelGenerator(std::string lblName, int lblIndex);
	std::string nextLabel();
};
#endif // !__labelgenerator_h__


