#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) return false;
    
    // Single digit numbers are palindromes
    if (x < 10) return true;
    
    // Numbers ending with 0 (except 0 itself) are not palindromes
    if (x % 10 == 0) return false;
    
    int reversed = 0;
    int original = x;
    
    // Reverse the number
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    
    return original == reversed;
}

int main(void) {
    // Test case 1
    int x1 = 121;
    printf("Input: x = %d\n", x1);
    printf("Output: %s\n", isPalindrome(x1) ? "true" : "false");
    printf("Explanation: 121 reads as 121 from left to right and from right to left.\n\n");

    // Test case 2
    int x2 = -121;
    printf("Input: x = %d\n", x2);
    printf("Output: %s\n", isPalindrome(x2) ? "true" : "false");
    printf("Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.\n\n");

    // Test case 3
    int x3 = 10;
    printf("Input: x = %d\n", x3);
    printf("Output: %s\n", isPalindrome(x3) ? "true" : "false");
    printf("Explanation: Reads 01 from right to left. Leading zeros are ignored, so it reads as 1. 10 != 1, therefore not a palindrome.\n\n");

    // Test case 4
    int x4 = 0;
    printf("Input: x = %d\n", x4);
    printf("Output: %s\n", isPalindrome(x4) ? "true" : "false");
    printf("Explanation: 0 is a palindrome.\n\n");

    // Test case 5
    int x5 = 12321;
    printf("Input: x = %d\n", x5);
    printf("Output: %s\n", isPalindrome(x5) ? "true" : "false");
    printf("Explanation: 12321 reads as 12321 from left to right and from right to left.\n");

    return 0;
}
