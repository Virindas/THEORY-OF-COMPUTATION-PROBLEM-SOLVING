/*
------------------------------------------------------------
Program: Simulation of a Non-Deterministic Finite Automata (NFA)

Question:
Write a C program to simulate a Non-Deterministic Finite Automata
(NFA) that accepts binary strings which start with '0' and end with '1'.

Example:
Input  : 0101
Output : Accepted

Input  : 1100
Output : Rejected
------------------------------------------------------------
*/

#include <stdio.h>      // For printf() and scanf()
#include <string.h>     // For strlen()

int main()
{
    char str[100];      // Stores the input binary string
    int n;              // Stores the length of the string

    // Read the binary string from the user
    printf("Enter a binary string: ");
    scanf("%s", str);

    // Find the length of the string
    n = strlen(str);

    // Check whether the string starts with '0' and ends with '1'
    if (str[0] == '0' && str[n - 1] == '1')
        printf("Accepted\n");   // String is accepted by the NFA
    else
        printf("Rejected\n");   // String is rejected by the NFA

    return 0;   // End of program
}
