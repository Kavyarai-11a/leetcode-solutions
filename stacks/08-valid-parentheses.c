#include <stdio.h>
#include <string.h>

int isValid(char str[])
{
    char stack[100];
    int top = -1;
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            top++;
            stack[top] = str[i];
        }
        else
        {
            if(top == -1)
            {
                return 0;
            }

            if((str[i] == ')' && stack[top] != '(') ||
               (str[i] == ']' && stack[top] != '[') ||
               (str[i] == '}' && stack[top] != '{'))
            {
                return 0;
            }

            top--;
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1 - Typical
    printf("Test Case 1: ");

    if(isValid("()[]{}"))
        printf("Valid\n");
    else
        printf("Invalid\n");

    // Test Case 2 - Edge Case
    printf("Test Case 2: ");

    if(isValid("([)]"))
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}