#include "Caesar.h"
#include <iostream>
#include <fstream>

using namespace std;
Caesar::Caesar() 
{
	fCharacterFrequenciesBefore;
	fCharacterFrequenciesAfter;
}

void Caesar::shiftByFour(ifstream& aInput, ofstream& aOutput)
{
	char loldChar = aInput; // not sure if this is correct
	char lNewChar;

	// continue with pseudo code
}


ostream& operator <<(ostream& aOStream, const Caesar& aObject)
{
	

}
