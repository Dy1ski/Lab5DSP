#pragma once
#include <iostream>
using namespace std;

class CharacterCounter
{
private:
	int fTotalNumberOfCharacters;
	int fCharacterCounts[255];

public:
	CharacterCounter();

	void count(unsigned char aCharacter);

	friend ostream& operator<< (ostream& aOStream, const CharacterCounter& aCharacterCounter);



};
