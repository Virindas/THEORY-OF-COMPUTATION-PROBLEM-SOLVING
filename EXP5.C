/*
------------------------------------------------------------
Program: Check Whether a String Belongs to the Grammar

Question:
Write a C program to check whether a given string belongs
to the following grammar.

Grammar:
S ? 0S0 | 1S1 | 0 | 1 | e

Description:
The grammar generates:
1. All binary palindrome strings.
2. The string can be empty (e).
3. The string reads the same from left to right
   and right to left.

Example:
Input  : 1001
Output : String Accepted

Input  : 1010
Output : String Rejected
------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n, flag = 1;

    // Read the input string
    printf("Enter a binary string: ");
    scanf("%s", str);

    // Find the length of the string
    n = strlen(str);

    // Check whether the string is a palindrome
    for(i = 0; i < n / 2; i++)
    {
        if(str[i] != str[n - i - 1])
        {
            flag = 0;
            break;
        }
    }

    // Display the result
    if(flag)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
