#include "Lab.h"

Lab::Lab(const std::string & input, const std::string & output, const std::string & search, const std::string & replace) :
	m_replaceStr(replace)
{
	m_inputFile.open(input);
	m_outputFile.open(output);
	m_regSearch = std::regex(search);
	if ((m_inputFile.rdstate() & std::ifstream::failbit) != 0)
	{
		std::cout << "Error opening [" << input << "] file" << std::endl;
		m_isRun = false;
	}
	if ((m_inputFile.rdstate() & std::ifstream::failbit) != 0) 
	{
		std::cout << "Error opening [" << input << "] file" << std::endl;
		m_isRun = false;
	}

}

Lab::~Lab()
{
	m_inputFile.close();
	m_outputFile.close();
}

void Lab::Run()
{
	if (m_isRun) {
		std::string str;
		while (m_inputFile >> str)
		{
			str = std::regex_replace(str, m_regSearch, m_replaceStr);
			m_outputFile << str;
		}
	}
}
