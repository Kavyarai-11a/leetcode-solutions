#include <stdio.h>

void moveZeroes(int nums[], int n)
{
    int i;
    int position = 0;
    int temp;

    for(i = 0; i < n; i++)
    {
        if(nums[i] != 0)
        {
            temp = nums[position];
            nums[position] = nums[i];
            nums[i] = temp;

            position++;
        }
    }
}

void display(int nums[], int n)
{
    int i;

    printf("[");
    for(i = 0; i < n; i++)
    {
        printf("%d", nums[i]);

        if(i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

int main()
{
    // Test Case 1 - Typical
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test Case 1: ");
    display(nums1, 5);

    // Test Case 2 - Edge Case
    int nums2[] = {0, 0, 0};

    moveZeroes(nums2, 3);

    printf("Test Case 2: ");
    display(nums2, 3);

    return 0;
}