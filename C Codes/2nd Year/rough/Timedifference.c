#include <stdio.h>
struct time {
    int hours;
    int minutes;
    int seconds;
};

int main(){
    struct time t1, t2, diff;

    printf("Enter the first time (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    printf("Enter the second time (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
    

    diff.hours = t2.hours - t1.hours;
    diff.minutes = t2.minutes - t1.minutes;
    diff.seconds = t2.seconds - t1.seconds;

    if (diff.seconds < 0) {
        diff.seconds += 60;
        diff.minutes--;
    }
    if (diff.minutes < 0) {
        diff.minutes += 60;
        diff.hours--;
    }
    if (diff.hours < 0) {
        diff.hours = -diff.hours;
    }

    printf("Time difference: %d hours, %d minutes, %d seconds\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}