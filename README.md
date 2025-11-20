# santosh_1837
#include <stdio.h>

#define MAX_DRIVERS 5
#define ID_DIGITS 4 // Assuming driver IDs are 4-digit numbers

// Structure to hold driver data (using only integers)
struct Driver {
    int id; // Unique driver ID
    int available; // 1 for available, 0 for unavailable
    int current_route_id; // ID of the route currently assigned
};

struct Driver drivers[MAX_DRIVERS];
int driver_count = 0;

// Function to initialize the system
void initialize_drivers() {
    int i;
    for (i = 0; i < MAX_DRIVERS; i++) {
        drivers[i].id = 0;
        drivers[i].available = 0;
        drivers[i].current_route_id = 0;
    }
}

// Function to add a new driver
void add_driver(int new_id) {
    if (driver_count < MAX_DRIVERS) {
        int i;
        // Check for existing ID
        for (i = 0; i < driver_count; i++) {
            if (drivers[i].id == new_id) {
                printf("Error: Driver with ID %d already exists.\n", new_id);
                return;
            }
        }
        drivers[driver_count].id = new_id;
        drivers[driver_count].available = 1; // New drivers are available by default
        drivers[driver_count].current_route_id = 0; // No route assigned initially
        driver_count++;
        printf("Driver with ID %d added successfully.\n", new_id);
    } else {
        printf("Error: Maximum number of drivers reached.\n");
    }
}

// Function to display all drivers
void display_drivers() {
    int i;
    if (driver_count == 0) {
        printf("No drivers in the system.\n");
        return;
    }
    printf("\n--- Driver List ---\n");
    for (i = 0; i < driver_count; i++) {
        printf("ID: %d, Available: %d, Current Route: %d\n",
               drivers[i].id, drivers[i].available, drivers[i].current_route_id);
    }
    printf("-------------------\n");
}

// Function to update driver availability
void update_driver_availability(int driver_id, int status) {
    int i;
    for (i = 0; i < driver_count; i++) {
        if (drivers[i].id == driver_id) {
            drivers[i].available = status;
            printf("Driver %d availability updated to %d.\n", driver_id, status);
            return;
        }
    }
    printf("Error: Driver with ID %d not found.\n", driver_id);
}

// Function to assign a route to a driver
void assign_route(int driver_id, int route_id) {
    int i;
    for (i = 0; i < driver_count; i++) {
        if (drivers[i].id == driver_id) {
            if (drivers[i].available == 1) {
                drivers[i].current_route_id = route_id;
                drivers[i].available = 0; // Driver is no longer available
                printf("Route %d assigned to driver %d.\n", route_id, driver_id);
            } else {
                printf("Error: Driver %d is not available.\n", driver_id);
            }
            return;
        }
    }
    printf("Error: Driver with ID %d not found.\n", driver_id);
}

// Function to complete a route
void complete_route(int driver_id) {
    int i;
    for (i = 0; i < driver_count; i++) {
        if (drivers[i].id == driver_id) {
            if (drivers[i].current_route_id != 0) {
                printf("Driver %d completed route %d.\n", driver_id, drivers[i].current_route_id);
                drivers[i].current_route_id = 0;
                drivers[i].available = 1; // Driver is now available
            } else {
                printf("Error: Driver %d is not currently on a route.\n", driver_id);
            }
            return;
        }
    }
    printf("Error: Driver with ID %d not found.\n", driver_id);
}

int main() {
    initialize_drivers();

    int choice, id, status, route_id;

    do {
        printf("\n--- Driver Management System ---\n");
        printf("1. Add Driver\n");
        printf("2. Display Drivers\n");
        printf("3. Update Driver Availability\n");
        printf("4. Assign Route\n");
        printf("5. Complete Route\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter new driver ID (e.g., 1001): ");
                scanf("%d", &id);
                add_driver(id);
                break;
            case 2:
                display_drivers();
                break;
            case 3:
                printf("Enter driver ID to update: ");
                scanf("%d", &id);
                printf("Enter new availability status (1 for available, 0 for unavailable): ");
                scanf("%d", &status);
                update_driver_availability(id, status);
                break;
            case 4:
                printf("Enter driver ID to assign route: ");
                scanf("%d", &id);
                printf("Enter route ID: ");
                scanf("%d", &route_id);
                assign_route(id, route_id);
                break;
            case 5:
                printf("Enter driver ID to complete route: ");
                scanf("%d", &id);
                complete_route(id);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}give me the project title , functional requirements,project feature,how to run the project,screenshots of the output.

Here is your full project documentation for the Driver Management System in C — including Project Title, Abstract, Functional Requirements, Features, How to Run, and Output Screenshots (ASCII mock-ups).

📌 Project Title

Driver Management System in C

📌 Abstract

The Driver Management System is a C-based console application designed to manage drivers and their route assignments efficiently. It allows the user to add new drivers, update their availability, assign routes, complete assigned routes, and view all driver details. The system uses structures and arrays to store driver information and uses menu-driven interaction for ease of use.

📌 Functional Requirements

System Initialization

Reset all driver data at program start.

Add Driver

Add new drivers with unique ID.

Ensure maximum limit is not exceeded.

Display All Drivers

Show ID, availability, and current route of each driver.

Update Availability

Change driver status: Available (1) / Unavailable (0).

Assign Route

Assign a route to an available driver.

Driver becomes unavailable after assignment.

Complete Route

Mark route as completed.

Driver becomes available again.

Menu-driven Interface

Allow user to select operations until exit.

📌 Project Features

✔ Add up to 5 drivers

✔ Prevent duplicate driver IDs

✔ Assign and track route IDs

✔ Update driver availability

✔ Real-time driver status display

✔ Error handling:

Driver not found

Maximum drivers reached

Driver unavailable

Route already completed

✔ User-friendly menu interface

📌 How to Run the Project

Step 1: Save the Code

Create a file named:
driver_management.c 
Paste the entire C code into the file.

Step 2: Compile the Program

If using GCC:
gcc driver_management.c -o driver_management 

Step 3: Run the Program

Windows:
driver_management.exe 
Linux/Mac:
./driver_management 

Step 4: Follow the Menu

Example:

Press 1 → Add driver

Press 2 → Display drivers

Press 4 → Assign route

📌 Screenshots of Output (Text-Based Mockups)

⿡ Main Menu

--- Driver Management System --- 1. Add Driver 2. Display Drivers 3. Update Driver Availability 4. Assign Route 5. Complete Route 0. Exit Enter your choice: 

⿢ Adding a Driver

Enter new driver ID (e.g., 1001): 1001 Driver with ID 1001 added successfully. 

⿣ Display Drivers

--- Driver List --- ID: 1001, Available: 1, Current Route: 0 ------------------- 

⿤ Assign Route

Enter driver ID to assign route: 1001 Enter route ID: 200 Route 200 assigned to driver 1001. 

⿥ Completing a Route

Enter driver ID to complete route: 1001 Driver 1001 completed route 200. 

⿦ Error Example: Duplicate ID

Enter new driver ID (e.g., 1001): 1001 Error: Driver with ID 1001 already exists.
