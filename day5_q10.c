#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    int rem_seconds = total_seconds % 3600;

    minutes = rem_seconds / 60;
    seconds = rem_seconds % 60;
    printf("Time format = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}