#include <stdio.h>

int main(void) {
    int total_seconds, hours, minutes, seconds;

    scanf("%i", &total_seconds);

    for (hours = 0; total_seconds >= 3600; hours++) {
        total_seconds -= 3600;
    }

    for (minutes = 0; total_seconds >= 60; minutes++) {
        total_seconds -= 60;
    }

    for (seconds = 0; total_seconds >= 1; seconds++) {
        total_seconds -= 1;
    }

    printf("%i:%i:%i\n", hours, minutes, seconds);

    return 0;
}
