#include <stdio.h>

void twoSum(int nums[], int n, int target)
{
    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No pair found\n");
}

int main()
{
    // Test Case 1 - Typical
    int nums1[] = {2, 7, 11, 15};

    printf("Test Case 1: ");
    twoSum(nums1, 4, 9);

    // Test Case 2 - Edge Case
    int nums2[] = {3, 3};

    printf("Test Case 2: ");
    twoSum(nums2, 2, 6);

    return 0;
}