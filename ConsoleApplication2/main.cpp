#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

void main() 
{
	string searchStr = "1231234";
	string replaceStr = "a";
	regex reg(searchStr);
	ifstream inputFile;
	ofstream outputFile;
 	outputFile.open("output.txt");
	inputFile.open("input.txt");
	string str = "";
	while (inputFile >> str)
	{		
		str = regex_replace(str, reg, replaceStr);
		cout << str << endl;
	}	
	inputFile.close();
}