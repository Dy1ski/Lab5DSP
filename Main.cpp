#include "CharacterCounter.h"
#include <iostream>

using namespace std;

int main( int argc, char* argv[])
{
	if (argc < 3)
	{
		cerr << "Arguments Missing" < endl;
		cerr << "Usage: FileCharacterCOunter infile outfile" << end;
		return 1;
	}
	
	ifStream lInput;

	lInput.open(argv[1], ifstream::in);
	
	if (!lInput.good())
	{
		cerr << "Cannot open input file: " << argv[1] << endl;
		return 2;
	}

	ofstream lOutput;
	lOutput.open(argv[2], ofstream::out);

	if (!lOutput.good())
	{
		cerr << "Cannot open output file: " << argv[2] << endl;
		lInput.close();
		return 3;
	
	}

	CharacterCounter lCounter;
	unsigned char lChar;
	while (cin >> lChar)
	{
		lCounter.count(lChar);
	}
	cout << lCounter;

	return 0;
};
