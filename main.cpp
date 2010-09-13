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
	cout << "MYSQL Host: " << getOptionToString("mysql_host") << "\n"; //Return string
	cout << "MYSQL User: " << getOptionToString("mysql_user") << "\n"; //Return string
	cout << "MYSQL Pass: " << getOptionToString("mysql_pass") << "\n"; //Return string
	cout << "MYSQL DB: " << getOptionToChar("mysql_db") << "\n"; //Return char
	cout << "MYSQL Socket: " << getOptionToChar("mysql_socket") << "\n"; //Return char
	cout << "MYSQL Port: " << getOptionToInt("mysql_port") << "\n"; //Return int
	cout << "Bad Config Item: " << getOptionToString("bad_config_item") << "\n"; //Should return nothing

	cleanupResults();
	cout << "MYSQL Host (After clean): " << getOptionToString("mysql_host") << "\n"; //Should return nothing as the config items have been cleaned

	return 0;
}


