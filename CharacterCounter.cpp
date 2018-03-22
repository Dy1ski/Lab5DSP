#include "CharacterCounter.h"
#include <iostream>
using namespace std;

CharacterCounter::CharacterCounter()
{
	fTotalNumberOfCharacters = 0;
	fCharacterCounts;
}

void CharacterCounter::count(unsigned char aCharacter) // acharacter is what's passed in by the main and you add it to the array
{
	fTotalNumberOfCharacters++; // counts everytime it's called by main
	fCharacterCounts[aCharacter]++; // adds the character to the array
}

ostream& operator<<(ostream& aOStream, const CharacterCounter& aCharacterCounter)
{
	aOStream << "Character Counts for " << aCharacterCounter.fTotalNumberOfCharacters << " characters:" << endl;

	for (int i = 0; i < 256; i++)
	{
		if (aCharacterCounter.fCharacterCounts[i] != 0)
		{
			aOStream << (char)i << ":\t" << aCharacterCounter.fCharacterCounts[i] << endl;
		}
	}
	return aOStream;
}
