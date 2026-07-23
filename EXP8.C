/*
------------------------------------------------------------
Program: Check Whether a String Belongs to the CFG

Question:
Write a C program to check whether a given string belongs
to the language defined by the following Context-Free Grammar (CFG).

Grammar:
S ? A101A
A ? 0A | 1A | e

Description:
The grammar generates all binary strings that contain
the substring "101" anywhere in the string.

Examples:
Accepted Strings:
101
0101
1011
0010100
111010111

Rejected Strings:
0000
1111
1001
0100
------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    // Read the input string
    printf("Enter a binary string: ");
    scanf("%s", str);

    // Check whether the string contains "101"
    if(strstr(str, "101") != NULL)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
