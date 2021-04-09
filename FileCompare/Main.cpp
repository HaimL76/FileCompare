#include <string>
#include <thread>
#include <iostream>

#include "FileReader.h"

using namespace std;

int main()
{
	string file1 = R"(C:\Users\haiml\debug.log)";
	string file2 = R"(C:\Users\haiml\index.html)";

	FileReader fr1(file1);
	FileReader fr2(file2);

	thread t1(&FileReader::Read, &fr1);
	thread t2(&FileReader::Read, &fr2);

	t1.join();
	t2.join();

	cout << "lalaluli";
}