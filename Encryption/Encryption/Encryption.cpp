// Encryption.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Encryptor.h"

int main()
{
	string input = "have a nice day";
	string output;
	Encryptor testyEncrypt(input, ENCRYPT);
	output = testyEncrypt.output();
	Encryptor testyDecrypt(output, DECRYPT);
	cout << output << endl;
	cout << testyDecrypt.output() << endl;
}

