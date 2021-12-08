#include <stdio.h>
#include <stdlib.h>



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* result = malloc(2*sizeof(int));
    int rest, i, j;

    *returnSize = 2;
    for (i = 0; i < numsSize; i ++)
    {
        rest = target - nums[i];
        for (j = i + 1; j < numsSize; j ++)
        {
            if (nums[j] == rest)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return NULL;
}

int main()
{
    int* test = NULL;
    int size, i;
    int array[3] = {3, 2, 4};
    int target = 6;
    printf("Hello world!\n");

    test = twoSum(array, sizeof(array)/sizeof(int), target, &size);

    if (test)
    {
        for (i = 0; i < size; i ++)
            printf("%d ", test[i]);

        free(test);
    }

    return 0;
}
