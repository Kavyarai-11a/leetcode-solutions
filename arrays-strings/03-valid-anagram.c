#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[])
{
    int count[256] = {0};
    int i;

    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    // Test Case 1 - Typical
    printf("Test Case 1: ");

    if(isAnagram("anagram", "nagaram"))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    // Test Case 2 - Edge Case
    printf("Test Case 2: ");

    if(isAnagram("rat", "car"))
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}