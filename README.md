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
