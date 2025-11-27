#include <stdio.h>

#define MAX_DRIVERS 5   // Maximum number of drivers allowed

// Structure to store driver details
struct Driver {
    int id;                 // Driver ID
    int available;          // 1 = available, 0 = unavailable
    int current_route_id;   // Route ID assigned (0 means NO route)
};

struct Driver drivers[MAX_DRIVERS];
int driver_count = 0;

void addDriver() {
    if (driver_count >= MAX_DRIVERS) {
        printf("Cannot add more drivers. Limit reached!\n");
        return;
    }

    int id;
    printf("Enter Driver ID (integer): ");
    scanf("%d", &id);

    drivers[driver_count].id = id;
    drivers[driver_count].available = 1;      // New driver is available
    drivers[driver_count].current_route_id = 0; // No route assigned
    driver_count++;

    printf("Driver added successfully!\n");
}

void displayDrivers() {
    if (driver_count == 0) {
        printf("No drivers available.\n");
        return;
    }

    printf("\n--- Driver List ---\n");
    for (int i = 0; i < driver_count; i++) {
        printf("\nDriver %d:\n", i + 1);
        printf("ID: %d\n", drivers[i].id);
        printf("Availability: %s\n", drivers[i].available ? "Available" : "Unavailable");
        printf("Current Route: %d\n", drivers[i].current_route_id);
    }
}

void updateAvailability() {
    int id, status;
    printf("Enter Driver ID: ");
    scanf("%d", &id);

    printf("Enter new status (1 = available, 0 = unavailable): ");
    scanf("%d", &status);

    for (int i = 0; i < driver_count; i++) {
        if (drivers[i].id == id) {
            drivers[i].available = status;
            printf("Driver availability updated!\n");
            return;
        }
    }

    printf("Driver not found!\n");
}

void assignRoute() {
    int id, route;
    printf("Enter Driver ID: ");
    scanf("%d", &id);

    printf("Enter Route ID to assign: ");
    scanf("%d", &route);

    for (int i = 0; i < driver_count; i++) {
        if (drivers[i].id == id) {
            if (drivers[i].available == 0) {
                printf("Driver is not available!\n");
                return;
            }
            drivers[i].current_route_id = route;
            drivers[i].available = 0;  // Driver becomes unavailable
            printf("Route assigned successfully!\n");
            return;
        }
    }

    printf("Driver not found!\n");
}

void completeRoute() {
    int id;
    printf("Enter Driver ID: ");
    scanf("%d", &id);

    for (int i = 0; i < driver_count; i++) {
        if (drivers[i].id == id) {
            if (drivers[i].current_route_id == 0) {
                printf("Driver has no route assigned!\n");
                return;
            }
            drivers[i].current_route_id = 0;
            drivers[i].available = 1;
            printf("Route completed! Driver is now available.\n");
            return;
        }
    }

    printf("Driver not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Driver Management System ---\n");
        printf("1. Add Driver\n");
        printf("2. Display Drivers\n");
        printf("3. Update Driver Availability\n");
        printf("4. Assign Route\n");
        printf("5. Complete Route\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addDriver(); break;
            case 2: displayDrivers(); break;
            case 3: updateAvailability(); break;
            case 4: assignRoute(); break;
            case 5: completeRoute(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}