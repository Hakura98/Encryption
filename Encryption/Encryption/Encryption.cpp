// Encryption.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Encryptor.h"


int main()
{
	string input;
	getline(cin, input);

	string output;
	auto start = high_resolution_clock::now();
	Encryptor testyEncrypt(input, ENCRYPT);

	int i = 10000;
	while (i--) {
		output = testyEncrypt.output();
	}
	auto end = high_resolution_clock::now();

	Encryptor testyDecrypt(output, DECRYPT);
	cout << output << endl;
	cout << testyDecrypt.output() << endl;
	cout << "Time it took: " << duration_cast<milliseconds>(end - start).count() << "ms" << endl;
}

