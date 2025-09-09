#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to simulate temperature sensor
int readTemperature() {
    return (rand() % 21) + 10; // generates between 10 and 30 °C
}

// Function to log data into a file
void logData(int temperature, const char *action) {
    FILE *fp = fopen("temperature_log.txt", "a");
    if (fp == NULL) {
        printf("Error opening log file!\n");
        return;
    }
    fprintf(fp, "Temperature: %d°C -> %s\n", temperature, action);
    fclose(fp);
}

int main() {
    srand(time(0)); // seed for random numbers

    int choice;
    printf("====================================\n");
    printf(" Smart Home Temperature Monitor \n");
    printf("====================================\n");
    printf("1. Start Monitoring\n");
    printf("2. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nMonitoring started... Press Ctrl+C to stop.\n\n");
        for (int i = 0; i < 20; i++) { // 20 readings for demo
            int temp = readTemperature();
            char action[20];

            if (temp > 30) {
                sprintf(action, "Fan ON");
            } else if (temp < 18) {
                sprintf(action, "Heater ON");
            } else {
                sprintf(action, "Normal");
            }

            printf("Temperature: %d°C -> %s\n", temp, action);
            logData(temp, action);

            // Small delay (simulate real-time monitoring)
            for (volatile long j = 0; j < 100000000; j++); 
        }
        printf("\nMonitoring finished. Logs saved in 'temperature_log.txt'.\n");
    } else {
        printf("Exiting program.\n");
    }

    return 0;
}
