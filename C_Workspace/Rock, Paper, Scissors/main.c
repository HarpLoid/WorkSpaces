#include <stdio.h>

int check_user_input(char user_input);

int main(void)
{

    // Declare variable
    char user_input;

    while (1)
    {
        char user_input = ' ';

        // Get user input
        printf("'q' to Quit\n'r' for Rock\n'p' for Paper\n's' for Scissors\nMake your choice: ");
        scanf(" %c", &user_input);

        // Print user input
        if (check_user_input(user_input))
            printf("%c\n", user_input);
        else if (user_input == 'q')
            break;
        else
            printf("Not a valid entry\n");
    }

    return (0);
}

int check_user_input(char user_input)
{
    char valid_inputs[3] = {'r', 'p', 's'};
    int i;

    for (i = 0; i < 3; i++)
    {
        if (valid_inputs[i] == user_input)
            return (1);
    }

    return (0);
}