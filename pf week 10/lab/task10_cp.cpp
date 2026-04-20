#include <iostream>
using namespace std;

string timeTravel(int hour, int min);
   

int main() {
    int hour, minute;

    cout << "Enter hour: ";
    cin >> hour;

    cout << "Enter minute: ";
    cin >> minute;

    cout << timeTravel(hour, minute) << endl;

    return 0;
}
string timeTravel(int hour, int min) {
    min += 15;

    if (min >= 60) {
        min = min- 60;
        hour = hour + 1;
    }

    if (hour >= 24) {
        hour = 0;
    }

    string hh = (hour < 10) ? "0" + to_string(hour) : to_string(hour);
    string mm = (min < 10) ? "0" + to_string(min) : to_string(min);

    return hh + ":" + mm;
}
