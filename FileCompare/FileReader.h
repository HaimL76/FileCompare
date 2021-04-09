#pragma once
#include <string>

using namespace std;

class FileReader
{
public:
	inline FileReader(string& fPath) :
		filePath(fPath)
	{

	}

	void Read();

private:
	string filePath;
};

