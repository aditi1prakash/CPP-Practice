// Standard (system) header files
#include <iostream>
#include <stdlib.h>
// Add more standard header files as required
// #include <string>

using namespace std;

string const alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string const key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

string encryptMessage (string secretMessage)
{
	string encryptedMessage{};

	for (size_t i = 0; i < secretMessage.length(); i++)
	{
		size_t position = alphabet.find(secretMessage.at(i));
		if (position != string::npos)
		{
			encryptedMessage += key.at(position);
		}
		else
		{
			encryptedMessage += secretMessage.at(i);
		}
	}

	return encryptedMessage;
}

string decryptMessage (string encryptedMessage)
{
	string decryptedMessage {};
	for(size_t i = 0; i < encryptedMessage.length(); i++)
	{
		size_t position = key.find(encryptedMessage.at(i));
		if(position != string::npos)
		{
			decryptedMessage += alphabet.at(position);
		}
		else
		{
			decryptedMessage += encryptedMessage.at(i);
		}
	}

	return decryptedMessage;
}

// Main program
int main() {

    string secretMessage = " ";
    cout << "Enter the secret message:" << endl;
    getline(cin, secretMessage);

    string encryptedMessage = encryptMessage(secretMessage);
    cout << "Encrypted Message is: " << encryptedMessage << endl;

    string decryptedMessage = decryptMessage(encryptedMessage);
    cout << "Decrypted Message is: " << decryptedMessage << endl;

    cout << endl;
    return 0;
}
