#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTimePeriod();
struct Time calculateTimeDifference(struct Time t1, struct Time t2);

int main() {
    struct Time time1, time2, difference;

    printf("Enter the first time period (hh:mm:ss): ");
    time1 = getTimePeriod();

    printf("Enter the second time period (hh:mm:ss): ");
    time2 = getTimePeriod();

    difference = calculateTimeDifference(time1, time2);

    printf("The difference is: %02d:%02d:%02d\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}

struct Time getTimePeriod() {
    struct Time t;

    scanf("%d:%d:%d", &t.hours, &t.minutes, &t.seconds);

    return t;
}

struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time difference;

    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

