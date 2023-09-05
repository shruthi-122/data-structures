#include <stdio.h>
#include <string.h>
int main()
{
	int pos, len;
	char string[14] = "geeksforgeeks";
	char substring[14];

	pos = 6;
	len = 5;
	printf("String: %s ", string);
	printf("\nsubstring is: ");
	strncpy(substring,string+(pos-1),len);
	printf(substring);
	char string[6] =  "abcde";
	char substring2[5];
	pos = 1;
	len = 3;
	printf("\nString: %s ", string);
	printf("\nsubstring is: ");
	strncpy(substring2,string+(pos-1),len);
	printf(substring2);
	return 0;
}

