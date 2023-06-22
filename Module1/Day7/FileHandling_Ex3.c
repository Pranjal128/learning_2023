#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
} LogEntry;

void readLogFile(LogEntry logEntries[], int* numEntries) {
    FILE* file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Failed to open data.csv.\n");
        exit(1);
    }

    char line[100];
    fgets(line, sizeof(line), file); // Read and discard the header line

    *numEntries = 0;
    while (fgets(line, sizeof(line), file) != NULL && *numEntries < MAX_ENTRIES) {
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &logEntries[*numEntries].entryNo,
               logEntries[*numEntries].sensorNo, &logEntries[*numEntries].temperature,
               &logEntries[*numEntries].humidity, &logEntries[*numEntries].light,
               logEntries[*numEntries].time);

        (*numEntries)++;
    }

    fclose(file);
}

void displayLogEntries(LogEntry logEntries[], int numEntries) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    printf("---------------------------------------------------------\n");
	int i;
    for (i = 0; i < numEntries; i++) {
        printf("%d\t%s\t%.1f\t\t%d\t\t%d\t%s\n", logEntries[i].entryNo, logEntries[i].sensorNo,
               logEntries[i].temperature, logEntries[i].humidity, logEntries[i].light,
               logEntries[i].time);
    }
}

int main() {
    LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    readLogFile(logEntries, &numEntries);
    displayLogEntries(logEntries, numEntries);

    return 0;
}

