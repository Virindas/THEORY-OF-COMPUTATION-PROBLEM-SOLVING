/*
------------------------------------------------------------
Program: Finding the e-Closure (Epsilon Closure) of all States
         in a Non-Deterministic Finite Automata (NFA) with e-Moves

Question:
Write a C program to find the e-Closure (E-Closure) for all
states in a Non-Deterministic Finite Automata (NFA) with e-moves.

Example:
State A -> e -> B
State B -> e -> C

Output:
E-Closure(A) = {A, B, C}
E-Closure(B) = {B, C}
E-Closure(C) = {C}
------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    char state[10];
    int e[10][10];

    // Read the number of states
    printf("Enter the number of states: ");
    scanf("%d", &n);

    // Read the state names
    printf("Enter the state names:\n");
    for(i = 0; i < n; i++)
        scanf(" %c", &state[i]);

    // Read the epsilon transition matrix
    printf("Enter the epsilon transition matrix (0 or 1):\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &e[i][j]);
        }
    }

    // Find and display the epsilon closure of each state
    printf("\nEpsilon Closures:\n");
    for(i = 0; i < n; i++)
    {
        printf("E-Closure(%c) = { %c", state[i], state[i]);

        for(j = 0; j < n; j++)
        {
            if(e[i][j] == 1)
                printf(", %c", state[j]);
        }

        printf(" }\n");
    }

    return 0;
}
