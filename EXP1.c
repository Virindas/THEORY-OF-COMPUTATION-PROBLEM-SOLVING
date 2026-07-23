/*
====================================================================
                    DETERMINISTIC FINITE AUTOMATA (DFA)
====================================================================

QUESTION:
Write a C program to simulate a Deterministic Finite Automaton (DFA).

DESCRIPTION:
This program simulates a DFA that accepts binary strings ending with
the digit '1'.

Alphabet       : {0, 1}
States         : q0 (Start State), q1 (Accept State)
Start State    : q0
Accept State   : q1

Transition Table:
-------------------------------------------------
Current State    Input 0          Input 1
-------------------------------------------------
q0               q0               q1
q1               q0               q1
-------------------------------------------------

Acceptance Condition:
The input string is ACCEPTED if it ends with '1'.
Otherwise, the input string is REJECTED.

ALGORITHM:
1. Start from the initial state (q0).
2. Read the input string one character at a time.
3. Change the current state according to the DFA transition rules.
4. After reading the complete string:
      - If the final state is q1, accept the string.
      - Otherwise, reject the string.

COMPILATION COMMAND:
gcc dfa.c -o dfa

RUN COMMAND:
./dfa

(Windows)
gcc dfa.c -o dfa.exe
dfa.exe

SAMPLE INPUT 1:
Enter the input string (0s and 1s): 1011

SAMPLE OUTPUT 1:
String Accepted.

SAMPLE INPUT 2:
Enter the input string (0s and 1s): 1010

SAMPLE OUTPUT 2:
String Rejected.

====================================================================
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int state = 0, i;

    printf("Enter the input string (0s and 1s): ");
    scanf("%s", input);

    for(i = 0; i < strlen(input); i++)
    {
        switch(state)
        {
            case 0:
                if(input[i] == '0')
                    state = 0;
                else if(input[i] == '1')
                    state = 1;
                else
                {
                    printf("Invalid input!\n");
                    return 0;
                }
                break;

            case 1:
                if(input[i] == '0')
                    state = 0;
                else if(input[i] == '1')
                    state = 1;
                else
                {
                    printf("Invalid input!\n");
                    return 0;
                }
                break;
        }
    }

    if(state == 1)
        printf("String Accepted.\n");
    else
        printf("String Rejected.\n");

    return 0;
}

