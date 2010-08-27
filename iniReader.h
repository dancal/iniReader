/* 
 * File:   iniReader.h
 * Author: benmaynard
 *
 * Created on August 26, 2010, 2:49 PM
 */

#ifndef INIREADER_H
#define	INIREADER_H

#include <string>
#include <fstream>

void parseIniFile(char *fileName);
std::string getOption(std::string key);
const char *getOptionChar(std::string key);
std::string getOptionName(std::string value);
std::string getOptionValue(std::string value);
std::string trim(std::string s);
std::string rtrim(std::string s);
std::string ltrim(std::string s);

#endif	/* INIREADER_H */

