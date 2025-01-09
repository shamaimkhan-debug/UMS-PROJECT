
#include<iostream>
using namespace std;

int main() {
    // declaring variables
    string adminEmail = "admin@uol.edu.pk";
    string adminPassword = "uol123";
    string studentName;
    string cnic;
    string phoneNumber;
    short availableSeatCs = 3;
    short availableSeatSLP = 3;
    short Marks;
    string program1 = "computer science";
    string program2 = "SLP";
    float minimumCriteriaProgram1 = 60;
    float minimumCriteriaProgram2 = 50;
    int option;
    
    cout << "University management system" << endl;
    cout << "1. Admin login" << endl;
    cout << "2. Apply as a student" << endl;
    cout << "3. Log out" << endl;
    cout << "Enter your option (1, 2, or 3): ";
    cin >> option;

    // admin workflow
    if(option == 1) {
        string adminClaimedEmail, adminClaimedPassword;
        cout << "Enter admin email: ";
        cin >> adminClaimedEmail;
        cout << "Enter admin password: ";
        cin >> adminClaimedPassword;

        if(adminClaimedEmail == adminEmail && adminClaimedPassword == adminPassword) {
            cout << "Admin login successful" << endl;
        } else {
            cout << "Admin login failed" << endl;
        }
    }

    // student workflow
    else if(option == 2) {
        // Variables for the student application
        string name;
        int obtMarks, totalMarks;
        float percentage;
        short seatsCs = availableSeatCs;
        short seatsSlp = availableSeatSLP;
        
        // Number of students to process
        int totalStudents = 5;

        // Loop through all student applications
        for(int i = 1; i <= totalStudents; i++) {
            cout << "Enter student " << i << " name: ";
            cin >> name;
            cout << "Enter obtained marks of student " <<endl;
            cin >> obtMarks;
            cout << "Enter total marks of student " <<endl;
            cin >> totalMarks;

            percentage = (float(obtMarks) / totalMarks) * 100;

            // Checking if the student qualifies for CS or SLP
            if(percentage >= minimumCriteriaProgram1 && seatsCs > 0) {
                cout << "Admission granted in CS" << endl;
                seatsCs--;
            } else {
                cout << "Admission not granted in CS: Criteria not met or seats full" << endl;
            }

            if(percentage >= minimumCriteriaProgram2 && seatsSlp > 0) {
                cout << "Admission granted in SLP" << endl;
                seatsSlp--;
            } else {
                cout << "Admission not granted in SLP: Criteria not met or seats full" << endl;
            }
// Transport System Module
int transportOption;
    cout << " Welcome to the Transport System" << endl;
    cout << "1. Assign a Bus to a Student" << endl;
    cout << "2. View Available Buses" << endl;
    cout << "Please choose an option (1 or 2):" << endl;
    cin >> transportOption;
// Assign Bus to Student
    if (transportOption == 1) {
        string studentName, busNumber;
        cout << "Enter the student's name: ";
        cin >> studentName;
        cout << "Enter the bus number : ";
        cin >> busNumber;
        cout << "student has been assigned to bus" << endl;
    }
     // View Available Buses
    else (transportOption == 2){
        cout << "Here are the available buses with seats left:" << endl;
        cout << " Bus 1 - 10 seats available" << endl;
        cout << " Bus 2 - 15 seats available" << endl;
        cout << " Bus 3 - 5 seats available" << endl;
    } 
    }
    }
// Fee Management Module
            float fee;
            int programChoice;
            cout << "Choose program for fee calculation: " << endl;
            cout << "1. Computer Science (CS)" << endl;
            cout << "2. SLP" << endl;
            cout << "Enter your program choice (1 or 2): ";
            cin >> programChoice;

            // Fee structure based on program
            if (programChoice == 1) {
                cout << "Fee for Computer Science program is 5000"  << endl;
            } else if (programChoice == 2) {
                cout << "Fee for SLP program is 4000: " << endl;
            } else {
                cout << "Invalid program choice" << endl;
            }
            return 0;
}


    



        
    
    
