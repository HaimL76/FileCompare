#include "FileReader.h"

#include <string>
#include <fstream>
#include <thread>
#include <iostream>

void FileReader::Read()
{
	if (filePath.empty())
		throw new exception("filePath");

	ifstream fin(filePath);

	try
	{
		char buff[1024];

		int index = 0;

		while (!fin.eof())
		{
			memset(buff, 0, 1024);

			const auto& stream = fin.read(buff, 1024);

			for (int i = 0; i < 1024; i++)
				cout << buff[i];

			cout << endl;
		}
	}
	catch (exception e)
	{

	}

	fin.close();
}
