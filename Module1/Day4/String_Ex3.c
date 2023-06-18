#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char *timeString) {
    char *token;
    char *delimiters = ":";
    unsigned long totalSeconds = 0;

    // Split the time string into hours, minutes, and seconds using strtok
    token = strtok((char *)timeString, delimiters);
    int hours = (int)strtoul(token, NULL, 10);

    token = strtok(NULL, delimiters);
    int minutes = (int)strtoul(token, NULL, 10);

    token = strtok(NULL, delimiters);
    int seconds = (int)strtoul(token, NULL, 10);

    // Compute the total seconds
    totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    return totalSeconds;
}

int main() {
    char timeString[100];

    printf("Enter the time in format 'hh:mm:ss': ");
    scanf("%s", timeString);

    unsigned long totalSeconds = computeTotalSeconds(timeString);
    printf("Total seconds: %lu\n", totalSeconds);

    return 0;
}

