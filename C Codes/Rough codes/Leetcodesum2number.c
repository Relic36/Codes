#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
	int *res = malloc(2 * sizeof(int));
	for (int i = 0; i < numsSize; ++i) {
		for (int j = i + 1; j < numsSize; ++j) {
			if (nums[i] + nums[j] == target) {
				res[0] = i;
				res[1] = j;
				return res;
			}
		}
	}
	free(res);
	return NULL;
}

int main(void) {
	int nums[] = {2, 7, 11, 15};
	int target = 9;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	int *ans = twoSum(nums, numsSize, target);
	if (ans) {
		printf("[%d,%d]\n", ans[0], ans[1]);
		free(ans);
	} else {
		printf("No solution\n");
	}
	return 0;
}