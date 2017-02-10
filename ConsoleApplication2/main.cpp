#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "Lab.h"

using namespace std;

void main(int argc, char* argv[])
{
	// inputFile outputFile search replace

	Lab *lab;
	if (argc >= 4) {
		lab = new Lab(argv[1], argv[2], argv[3], argv[4]);
	}
	else
	{
		std::cout << "Not all args" << std::endl;
	}
	lab->Run();
}