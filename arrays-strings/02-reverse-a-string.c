#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main()
{
    // Test Case 1 - Typical
    char str1[] = "hello";

    printf("Test Case 1: ");
    reverseString(str1);
    printf("%s\n", str1);

    // Test Case 2 - Edge Case
    char str2[] = "a";

    printf("Test Case 2: ");
    reverseString(str2);
    printf("%s\n", str2);

    return 0;
}