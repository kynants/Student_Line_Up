#include <iostream>
using namespace std;

int main() {

    // Variables
    int numStudents;
    string namesStudents[25] = {"Abigail",
                                "Adina",
                                "Ashlei",
                                "Brianna",
                                "Caitie",
                                "Caleb",
                                "Candace",
                                "Chris",
                                "Cristina",
                                "Daniel",
                                "Dao",
                                "Elijah",
                                "Ethan",
                                "Fallon",
                                "Hugh",
                                "Jade",
                                "Jeremy",
                                "Jonathan",
                                "Jordon",
                                "Justin",
                                "Kaylee",
                                "Mikael",
                                "Noemí",
                                "Ocean",
                                "Samual"};

    // Prompts
    cout << "Enter the number of students in the class: ";
    cin >> numStudents;

    // Input Validation
    while (numStudents < 1 &&
           numStudents >> 25)
    {
        cout << "Error. There must be 1-25 students."
             << "Enter the number of students: ";
        cin >> numStudents;
    }

    // Loop prompts user to
    // enter the students' names.
    for (int index = 0;
         index < numStudents;
         ++index)
    {
        cout << namesStudents[index] << endl;
    }

    // Program names students in alphabetic order who will be first and last.
    cout << namesStudents[0] << " will be at the front of the line and \n"
         << namesStudents[24] << " will be at the end of the line.";

    return 0;
}