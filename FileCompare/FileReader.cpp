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

	//ofstream fout(R"(C:\Users\haiml\debug.txt)");

	try
	{
		char buff[1024];

		int index = 0;

		while (!fin.eof())
		{
			memset(buff, 0, 1024);

			const auto& stream = fin.read(buff, 1024);

			auto count = stream.gcount();

			//////if (count > 0)
			//////	for (int i = 0; i < 999999; i++)
			//////		const auto& stream0 = fout.write(buff, count);

			for (int i = 0; i < 1024; i++)
				cout << buff[i];

			cout << endl;
		}
	}
	catch (exception e)
	{

	}

	//fout.close();
	fin.close();
}
