#include <stdio.h>

struct Time {
     short hours;
     short minutes;
     short seconds;
     short day;
     short month;
     short year;
};

int main() {
    struct Time t;
    printf("Enter the values\n");
    scanf("%hu %hu %hu %hu %hu %hu", &t.hours, &t.minutes, &t.seconds, &t.day, &t.month, &t.year);
    printf("Time : %hu:%hu:%hu\n", t.hours, t.minutes, t.seconds);
    printf("Date : %hu-%hu-%hu\n", t.day, t.month, t.year);
    printf("Size of struct: %lu bytes\n", sizeof(t));
    return 0;
}
