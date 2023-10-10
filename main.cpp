#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    char choice;

    do {
        // Variables for user input
        string animal1, animal2;
        double courseLength, speed1, speed2, StopToTease;

        // Get user input
        cout << "Enter the name of Animal 1: ";
        cin >> animal1;

        cout << "Enter the speed of " << animal1 << " (in m/s): ";
        cin >> speed1;

        cout << "Enter the name of Animal 2: ";
        cin >> animal2;

        cout << "Enter the speed of " << animal2 << " (in m/s): ";
        cin >> speed2;

        cout << "Enter the total length of the course (in km): ";
        cin >> courseLength;
        courseLength *= 1000;  // Convert to meters

        cout << "Enter the distance " << animal1 << " traveled before stopping (in km): ";
        cin >> StopToTease;
        StopToTease *= 1000;  // Convert to meters

        Sleep(500);

        cout << "Thank you for the variables, starting calculations";
        Sleep(500);
        cout << " . ";
        Sleep(500);
        cout << " . ";
        Sleep(500);
        cout << " . \n\n";
        Sleep(500);

        // Calculate times
        double time1Run = StopToTease / speed1;
        cout << "time1Run Calculation: StopToTease( " << StopToTease << " ) / Speed1( " << speed1 << " )\n\n" << " = time1Run: " << time1Run << "\n\n\n";
        Sleep(5000);

        double time2ToReachStoppingPoint = StopToTease / speed2;
        cout << "time2ToReachStoppingPoint Calculation: StopToTease( " << StopToTease << " ) / Speed2( " << speed2 << " )\n\n" << " = time2ToReachStoppingPoint: " << time2ToReachStoppingPoint << "\n\n\n";
        Sleep(5000);

        double waitingTime = time2ToReachStoppingPoint - time1Run;
        cout << "waitingTime Calculation: time2ToReachStoppingPoint( " << time2ToReachStoppingPoint << " ) - time1Run( " << time1Run << " )\n\n" << " = waitingTime: " << waitingTime << "\n\n\n";
        Sleep(5000);

        double remainingDistance = courseLength - StopToTease;
        cout << "remainingDistance Calculation: CourseLength( " << courseLength << " ) - StopToTease( " << StopToTease << " )\n\n" << " = remainingDistance: " << remainingDistance << "\n\n\n";
        Sleep(5000);

        double time1Remaining = remainingDistance / speed1;
        cout << "time1Remaining Calculation: remainingDistance( " << remainingDistance << " ) / speed1( " << speed1 << " )\n\n"
            << " = time1Remaining: " << time1Remaining << "\n\n\n";
        Sleep(5000);

        double time2Remaining = remainingDistance / speed2;
        cout << "time2Remaining Calculation: remainingDistance( " << remainingDistance << " ) / speed2( " << speed2 << " )\n\n"
            << " = time2Remaining: " << time2Remaining << "\n\n\n";
        Sleep(5000);


        cout << "Calculation: waitingTime(" << waitingTime << ") + ( time2Remaining[" << time2Remaining << "] - time1Remaining[" << time1Remaining << "] )\n\n";
        waitingTime += time2Remaining - time1Remaining;
        cout << " = " << waitingTime << "\n\n\n";
        Sleep(5000);

        double D = courseLength - (remainingDistance / speed1) * speed2;
        cout << "Calculation D: courseLength( " << courseLength << " ) - (remainingDistance( " << remainingDistance << " ) / speed1( " << speed1 << " ) * speed2( " << speed2 << " ))\n\n"
            << " = " << D << "\n\n\n";
        Sleep(5000);


        double animal2Distance = courseLength - D;
        cout << "Calculation: courseLength( " << courseLength << " ) - D( " << D << " )\n\n"
            << " = " << animal2Distance << "\n\n\n";
        Sleep(5000);
        


        cout << "(a) How far (in m) is the " << animal2 << " from the finish line "
            << "when the " << animal1 << " resumes the race?\n"
            << animal2Distance
            << " meters."
            << endl;


        cout << "(b) For how long in time (in s) was the " << animal1 << "stationary? \n"
            << waitingTime
            << " seconds."
            << endl;

        // Ask user if they want to continue or exit
        cout << "\nWould you like to continue? Press 'y' to continue or 'n' to exit: ";
        cin >> choice;
        cin.ignore();  // Clear the buffer

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

