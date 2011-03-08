/* 
 * File:   main.c
 * Author: bmaynard
 *
 * Created on March 8, 2011, 10:32 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <iniReader.h>

/*
 * 
 */
int main(int argc, char** argv) {
	// Config values must be char pointer with length of 60
	char *mysql_host[60];
	char *mysql_user[60];
	char *mysql_pass[60];
	char *mysql_db[60];
	char *mysql_socket[60];
	
	parseIniFile("sample.cfg");
	
	if (getConfigValue(mysql_host, "mysql_host") != 1)
	{
		printf("Can not find 'mysql_host' in configuration file.");
		return(-1);
	}
	
	else
	{
		printf("MYSQL Host: %s\n", mysql_host);
	}
	
	if (getConfigValue(mysql_user, "mysql_user") != 1)
	{
		printf("Can not find 'mysql_user' in configuration file.");
		return(-1);
	}
	
	else
	{
		printf("MYSQL User: %s\n", mysql_user);
	}
	
	if (getConfigValue(mysql_pass, "mysql_pass") != 1)
	{
		printf("Can not find 'mysql_pass' in configuration file.");
		return(-1);
	}
	
	else
	{
		printf("MYSQL Pass: %s\n", mysql_pass);
	}
	
	if (getConfigValue(mysql_db, "mysql_db") != 1)
	{
		printf("Can not find 'mysql_db' in configuration file.");
		return(-1);
	}
	
	else
	{
		printf("MYSQL DB: %s\n", mysql_db);
	}
	
	if (getConfigValue(mysql_socket, "mysql_socket") != 1)
	{
		printf("Can not find 'mysql_socket' in configuration file.");
		return(-1);
	}
	
	else
	{
		printf("MYSQL Socket: %s\n", mysql_socket);
	}
	
	return (EXIT_SUCCESS);
}

