

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

<img width="462" height="210" alt="Screenshot 2025-11-27 101514" src="https://github.com/user-attachments/assets/c83bc3de-dd41-4e17-98e9-914bbbd2e8d2" />

⿢ Adding a Driver

<img width="346" height="245" alt="Screenshot 2025-11-27 101503" src="https://github.com/user-attachments/assets/82851766-4bad-4fcf-bd10-384beaca6173" />
⿣ Display Drivers

<img width="365" height="258" alt="Screenshot 2025-11-27 101450" src="https://github.com/user-attachments/assets/2037af33-09f1-43be-8fb0-f0d481f068a9" />

⿤ Assign Route

<img width="500" height="266" alt="Screenshot 2025-11-27 101434" src="https://github.com/user-attachments/assets/3fc9d26d-f768-4938-8f62-d3aecc4b0e69" /> driver 1001. 

⿥ Completing a Route

<img width="302" height="333" alt="Screenshot 2025-11-27 101402" src="https://github.com/user-attachments/assets/73a15d14-f414-4782-b4c0-e0ac17495ca7" />
⿦ Error Example: Duplicate ID

<img width="311" height="242" alt="Screenshot 2025-11-27 101349" src="https://github.com/user-attachments/assets/30cb40bd-8016-4ba9-bf39-769517909ee1" />
