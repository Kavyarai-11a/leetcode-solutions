#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char* strs[], int n)
{
    int i, j;
    int length = strlen(strs[0]);

    for(i = 1; i < n; i++)
    {
        j = 0;

        while(j < length && strs[i][j] == strs[0][j])
        {
            j++;
        }

        length = j;
    }

    if(length == 0)
    {
        printf("No common prefix\n");
    }
    else
    {
        printf("Common Prefix: ");

        for(i = 0; i < length; i++)
        {
            printf("%c", strs[0][i]);
        }

        printf("\n");
    }
}

int main()
{
    // Test Case 1 - Typical
    char* strs1[] = {"flower", "flow", "flight"};

    printf("Test Case 1: ");
    longestCommonPrefix(strs1, 3);

    // Test Case 2 - Edge Case
    char* strs2[] = {"dog", "racecar", "car"};

    printf("Test Case 2: ");
    longestCommonPrefix(strs2, 3);

    return 0;
}