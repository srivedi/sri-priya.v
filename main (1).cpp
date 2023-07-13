/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

// Function to check weather conditions
void checkWeather(string day, string weather) {
    if (weather == "sunny") {
        cout << "The weather on " << day << " is sunny. Enjoy the day!\n";
    } else if (weather == "cloudy") {
        cout << "The weather on " << day << " is cloudy. Don't forget your umbrella!\n";
    } else if (weather == "rainy") {
        cout << "The weather on " << day << " is rainy. Stay dry!\n";
    } else {
        cout << "The weather condition for " << day << " is unknown.\n";
    }
}

int main() {
    string name, college;
    string today, tomorrow, yesterday;
    string today_weather, tomorrow_weather, yesterday_weather;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your college name: ";
    getline(cin, college);

    cout << "Enter the weather condition for today: ";
    getline(cin, today_weather);

    cout << "Enter the weather condition for tomorrow: ";
    getline(cin, tomorrow_weather);

    cout << "Enter the weather condition for yesterday: ";
    getline(cin, yesterday_weather);

    cout << endl;
    cout << "Hello, " << name << " from " << college << "!" << endl;

    checkWeather("Yesterday", yesterday_weather);
    checkWeather("Today", today_weather);
    checkWeather("Tomorrow", tomorrow_weather);

    return 0;

}