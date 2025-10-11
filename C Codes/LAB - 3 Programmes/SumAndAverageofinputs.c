#include <stdio.h>
int main() {
    int count = 0, num, sum = 0;
    float average;
    printf("Enter 10 different numbers:\n");
    while (count < 10) {
        scanf("%d", &num);
        sum = sum + num;
        count = count + 1;
    }
    average = sum / 10.0;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}