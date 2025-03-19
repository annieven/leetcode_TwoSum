#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * URL:
 * https://github.com/annieven/leetcode_TwoSum
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i, j;
    int* result = 0;

    result = malloc(2*sizeof(int));

    if(result == NULL)
        return NULL;
    else
        *returnSize = 2;

    for(i = 0; i < numsSize; i ++)
    {
        int check = target - nums[i];
        for(j = i + 1; j < numsSize; j ++)
        {
            if(nums[j] == check)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return result;
}

int main()
{
    int outputSize;
    int *output = NULL;
    int input[4] = {2, 7, 11, 15};
    int target = 9;

    output = twoSum(input, 4, target, &outputSize);

    if(output != NULL)
    {
        printf("output: %d, %d\n\n", output[0], output[1]);
        free(output);
    }

    return 0;
}
