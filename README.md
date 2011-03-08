# IniReader

This library is a simple configuration class that will parse configuration file in a key = value format. This library was used for the CPUHog application (https://github.com/bmaynard/CPUHog) which was originally written in C++ then re-written in C hence why there are 2 different versions.

The C version is very simple and more efficient but will only copy the values into a char pointer with the length of 60, where the C++ library can return string, char and int versions.

## Including IniReader (Both Versions)

Include the the files when building your project and add the following to include the iniReader library:

	#include <iniReader.h>

## C Usage:

	char *mysql_host[60];
	
	parseIniFile("sample.cfg");
	
	if (getConfigValue(mysql_host, "mysql_host") != 1)
	{
		printf("Can not find 'mysql_host' in configuration file.");
		return(-1);
	}
	
Please see main.c for a full usage and example.

## C++ Usage:

	parseIniFile("sample.ini");
	cout << getOption("mysql_host") << "\n"; //Return string
	cout << getOption("mysql_user") << "\n"; //Return string
	cout << getOption("mysql_pass") << "\n"; //Return string
	cout << getOptionChar("mysql_db") << "\n"; //Return char
	cout << getOptionChar("mysql_socket") << "\n"; //Return char
	cleanupIniReader();
	
Please see main.cpp for a full usage and example.