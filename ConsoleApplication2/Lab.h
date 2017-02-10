#pragma once
#include <string>
#include <regex>
#include <fstream>
#include <iostream>

class Lab
{
public:
	Lab(const std::string & input, const std::string & output, const std::string & search, const std::string & replace);
	~Lab();
	void Run();
private:
	bool m_isRun = true;
	std::string m_replaceStr;
	std::regex m_regSearch;
		
	std::fstream m_inputFile;
	std::fstream m_outputFile;

};

