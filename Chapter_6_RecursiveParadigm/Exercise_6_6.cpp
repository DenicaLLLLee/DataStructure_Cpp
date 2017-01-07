/*
In order to make their phone numbers more memorable, service providers like to find
numbers that spell out some word (called a mnemonic) appropriate to their business
that makes that phone number easier to remember. For example, the phone number
for a recorded time-of-day message in some localities is 637-8687 (NERVOUS).
Imagine that you have just been hired by a local telephone company to write a
function ListMnemonics that will generate all possible letter combinations that
correspond to a given number, represented as a string of digits. For example, the call
ListMnemonics("723")
should generate the following 36 possible letter combinations that correspond to that
prefix:
PAD PBD PCD QAD QBD QCD RAD RBD RCD SAD SBD SCD
PAE PBE PCE QAE QBE QCE RAE RBE RCE SAE SBE SCE
PAF PBF PCF QAF QBF QCF RAF RBF RCF SAF SBF SCF
	Oyashi
	01/06/2017
*/

#include <iostream>
#include <string>
#include "HeaderFiles\recursiveparadigm.h"

using namespace std;

int main() {
	string inputWord;
	cout << "Please enter the telephone digits for possible combinations : "; cin >> inputWord;
	ListMnemonics(inputWord);
}