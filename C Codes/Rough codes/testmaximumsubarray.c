// C Program to print subarray with maximum sum using Kadane's Algorithm

#include <stdio.h>
#include <limits.h>

// Function to find the subarray with maximum sum
void maxSumSubarray(int arr[], int size, int* start, int* end, 
                    					int* res, int* resSize) {
    // start and end of max sum subarray
    int resStart = 0, resEnd = 0;
  
    // start of current subarray
    int currStart = 0;
  
    int maxSum = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < size; i++) {
      
        // If starting a new subarray from the current element 
        // has greater sum than extending the previous subarray
        if (maxEnding + arr[i] < arr[i]) {
            
            // Update current subarray sum with current element 
            // and start of current subarray with current index
            maxEnding = arr[i]; 
            currStart = i;
        } 
        else {
          
            // Add current element to current subarray sum
            maxEnding += arr[i];
        }
      
        // If current subarray sum is greater than maximum subarray sum
        if (maxEnding > maxSum) {
          
            // Update maximum subarray sum
            maxSum = maxEnding;
          
            // Update start and end of maximum sum subarray 
            resStart = currStart;
            resEnd = i;
        }
    }
  
    *start = resStart;
    *end = resEnd;

    *resSize = resEnd - resStart + 1;
    for (int i = 0; i < *resSize; i++) {
        res[i] = arr[resStart + i];
    }
}

int main() {
    int arr[] = {2, 3, -8, 7, -1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    int start, end, resSize;
    int res[size];

    maxSumSubarray(arr, size, &start, &end, res, &resSize);
  
    for (int i = 0; i < resSize; i++) {
        printf("%d ", res[i]);
    }
  
    return 0;
}
