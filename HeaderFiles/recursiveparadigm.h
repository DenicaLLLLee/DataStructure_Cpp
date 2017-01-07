#pragma once
#ifndef __recursiveparadigm_h__
#define __recursiveparadigm_h__
void MoveSingleDisk(char start, char finish);
void MoveTower(int n, char start, char finish, char temp);
void ListPermutations(std::string str);
void RecursivePermute(std::string prefix, std::string rest);
int NHanoiMoves(int n);
void ListMnemonics(std::string str);
void PhoneDigits(std::string str, int currentDigit, char* output);
void ListSubsets(std::string str);
void RecursiveSubset(std::string prefix, std::string rest);
#endif // !__recursiveparadigm_h__

