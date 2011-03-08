/*
 * File:   iniReader.c++
 * Author: benmaynard
 *
 * Created on August 26, 2010, 2:49 PM
 */

#include "iniReader.h"

struct ConfigItems {
	char key[60];
	char value[60];
};

struct ConfigItems item[80]; //Suport 80 items

int i = 0;

void parseIniFile(char *fileName) {
	char buf[120]; /* Support lines up to 120 characters */
	char parts[2][60]; /* Support up to 60 characters in each part */

	FILE* fp;

	if ((fp = fopen(fileName, "r")) == NULL) {
		printf("Unable to open file: %s", fileName);
		return;
	}
	
	while (fgets(buf, sizeof(buf), fp) != NULL)
	{
		if (sscanf(buf, "%s = %s", parts[0], parts[1]) == 2) {
			strcpy(item[i].key, parts[0]);
			strcpy(item[i].value, parts[1]);
			i++;
		}
	}
	
	i--;
	fclose(fp);
}

int getConfigValue(char *dest, char *key)
{
	//Check to see if anything got parsed?
	if (i == 0)
	{
		return 0;
	}

	int x;
	
	for (x = 0; x <= i; x++)
	{
		if (strcmp(key, item[x].key) == 0)
		{
			strcpy(dest, item[x].value);
			return 1;
		}
	}

	return 0;
}


