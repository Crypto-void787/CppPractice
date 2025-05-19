#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int birthDay, birthMonth, birthYear;

    // --- Input DOB ---
    cout << "Enter your birth date (DD MM YYYY): ";
    cin >> birthDay >> birthMonth >> birthYear;

    // --- Get current date ---
    time_t t = time(0);
    tm* now = localtime(&t);

    int currentDay = now->tm_mday;
    int currentMonth = now->tm_mon + 1;  // tm_mon is 0-11
    int currentYear = now->tm_year + 1900;

    int ageYear, ageMonth, ageDay;

    // --- Calculate Day ---
    if (currentDay < birthDay) {
        currentDay += 30;
        currentMonth--;
    }
    ageDay = currentDay - birthDay;

    // --- Calculate Month ---
    if (currentMonth < birthMonth) {
        currentMonth += 12;
        currentYear--;
    }
    ageMonth = currentMonth - birthMonth;

    // --- Calculate Year ---
    ageYear = currentYear - birthYear;

    // --- Output ---
    cout << "You are " << ageYear << " years, "
         << ageMonth << " months, and "
         << ageDay << " days old." << endl;

    return 0;
}



