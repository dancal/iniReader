/* 
 * File:   main.cpp
 * Author: benmaynard
 *
 * Created on August 24, 2010, 2:53 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include "iniReader.h"

using namespace std;

int main(int argc, char** argv) {
	parseIniFile("sample.ini");
	cout << getOption("mysql_host") << "\n"; //Return string
	cout << getOption("mysql_user") << "\n"; //Return string
	cout << getOption("mysql_pass") << "\n"; //Return string
	cout << getOptionChar("mysql_db") << "\n"; //Return char
	cout << getOptionChar("mysql_socket") << "\n"; //Return char
	return 0;
}


