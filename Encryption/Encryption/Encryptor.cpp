#include "pch.h"
#include "Encryptor.h"


Encryptor::Encryptor() : MODE(0)
{
	
}

Encryptor::Encryptor(string input, const int mode) : MODE(mode)
{
	text = input;
}

string Encryptor::output() 
{
	string result = "";

	unsigned int l = text.length();
	unsigned int row = (unsigned int) floor(sqrt(l));
	unsigned int column = (unsigned int) ceil(sqrt(l));

	if (row * column < l)
		row = column;

	if (MODE == DECRYPT) {
		int oldRow = row;
		row = column;
		column = oldRow;
	}
		

	for (size_t i = 0; i < column; i++)
	{
		for (size_t j = 0; i + j < l; j += column)
		{
			result += text[i + j];
		}
	}

	return result;
}

Encryptor::~Encryptor()
{
}
