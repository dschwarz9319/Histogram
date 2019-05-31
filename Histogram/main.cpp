#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void printArray(int arr[]){
int counter = 0;

for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        cout << setw(3) << left << arr[counter] << "     ";
        counter++;
    }
    cout << endl;
}
cout << endl << endl;
}

void populateRandomArray(int arr[], float average) {
double randomNum = 0;

for (int i = 0; i < 100; i++){
      randomNum = (((double) rand() / (RAND_MAX)) + 1) - 1;
      //cout << randomNum << endl;
      arr[i] = abs((log(1-randomNum)) * average);
}

}

float averageCalculator(int arr[]){
float average = 0;


for (int i = 0; i < 100; i++){
    average = average + arr[i];
}
//cout << endl << endl << average;
average = average/100;
return average;
}

void histogram(int arr[]){
int zero_five = 0;
int six_ten = 0;
int eleven_fifteen = 0;
int sixteen_twenty = 0;
int twentyone_twentyfive = 0;
int twentysix_thirty = 0;
int thirtyone_thirtyfive = 0;
int thirtysix_fourty = 0;
int fourtyone_fourtyfive = 0;
int fourtysix_fifty = 0;
int above_fifty = 0;

for (int i = 0; i < 100; i++){
    if ((arr[i] > 0) && (arr[i] < 6)) zero_five++;
    if ((arr[i] > 5) && (arr[i] < 11)) six_ten++;
    if ((arr[i] > 10) && (arr[i] < 16)) eleven_fifteen++;
    if ((arr[i] > 15) && (arr[i] < 21)) sixteen_twenty++;
    if ((arr[i] > 20) && (arr[i] < 26)) twentyone_twentyfive++;
    if ((arr[i] > 25) && (arr[i] < 31)) twentysix_thirty++;
    if ((arr[i] > 30) && (arr[i] < 36)) thirtyone_thirtyfive++;
    if ((arr[i] > 35) && (arr[i] < 41)) thirtysix_fourty++;
    if ((arr[i] > 40) && (arr[i] < 46)) fourtyone_fourtyfive++;
    if ((arr[i] > 45) && (arr[i] < 51)) fourtysix_fifty++;
    if ((arr[i] > 51)) above_fifty++;
}


 cout << "Relative Frequency of Interarrival Times" << endl;
 cout << "Class Interval     Frequency     Probability" << endl << endl;

cout << "0-5                " << setw(3) << left << zero_five << "           " << setw(3) << left << zero_five << "/100" << endl;
cout << "6-10               " << setw(3) << left << six_ten << "           " << setw(3) << left << six_ten << "/100" << endl;
cout << "11-15              " << setw(3) << left << eleven_fifteen << "           " << setw(3) << left << eleven_fifteen << "/100" << endl;
cout << "16-20              " << setw(3) << left << sixteen_twenty << "           " << setw(3) << left << sixteen_twenty << "/100" << endl;
cout << "21-25              " << setw(3) << left << twentyone_twentyfive << "           " << setw(3) << left << twentyone_twentyfive << "/100" << endl;
cout << "26-30              " << setw(3) << left << twentysix_thirty << "           " << setw(3) << left << twentysix_thirty << "/100" << endl;
cout << "31-35              " << setw(3) << left << thirtyone_thirtyfive << "           " << setw(3) << left << thirtyone_thirtyfive << "/100" << endl;
cout << "36-40              " << setw(3) << left << thirtysix_fourty << "           " << setw(3) << left << thirtysix_fourty << "/100" << endl;
cout << "41-45              " << setw(3) << left << fourtyone_fourtyfive << "           " << setw(3) << left << fourtyone_fourtyfive << "/100" << endl;
cout << "46-50              " << setw(3) << left << fourtysix_fifty << "           " << setw(3) << left << fourtysix_fifty << "/100" << endl;
cout << ">50                " << setw(3) << left << above_fifty << "           " << setw(3) << left << above_fifty << "/100" << endl << endl << endl;

cout << "Relative Frequency Histogram for Interraival Time Data" << endl << endl;

cout << "0-5:   ";
for (int i = 0; i < zero_five; i++){
    cout << "*";
}
cout << " " << zero_five << endl;

cout << "6-10:  ";
for (int i = 0; i < six_ten; i++){
    cout << "*";
}
cout << " " << six_ten << endl;


cout << "11-15: ";
for (int i = 0; i < eleven_fifteen; i++){
    cout << "*";
}
cout << " " << eleven_fifteen << endl;


cout << "16-20: ";
for (int i = 0; i < sixteen_twenty; i++){
    cout << "*";
}
cout << " " << sixteen_twenty << endl;


cout << "21-25: ";
for (int i = 0; i < twentyone_twentyfive; i++){
    cout << "*";
}
cout << " " << twentyone_twentyfive << endl;


cout << "26-30: ";
for (int i = 0; i < twentysix_thirty; i++){
    cout << "*";
}
cout << " " << twentysix_thirty << endl;


cout << "31-35: ";
for (int i = 0; i < thirtyone_thirtyfive; i++){
    cout << "*";
}
cout << " " << thirtyone_thirtyfive << endl;


cout << "36-40: ";
for (int i = 0; i < thirtysix_fourty; i++){
    cout << "*";
}
cout << " " << thirtysix_fourty << endl;


cout << "41-45: ";
for (int i = 0; i < fourtyone_fourtyfive; i++){
    cout << "*";
}
cout << " " << fourtyone_fourtyfive << endl;


cout << "46-50: ";
for (int i = 0; i < fourtysix_fifty; i++){
    cout << "*";
}
cout << " " << fourtysix_fifty << endl;


cout << ">50:   ";
for (int i = 0; i < above_fifty; i++){
    cout << "*";
}
cout << " " << above_fifty << endl;
}

int main() {
      srand (time(NULL));

    float expected = 0;
    float observed = 0;
    float chiSquared = 0;
    int hospitalArray[100] = {18, 13, 3, 40, 9, 29, 10, 3, 8, 10,
                              1, 17, 29, 2, 22, 1, 22, 1, 4, 32,
                              20, 5, 8, 6, 10, 3, 1, 11, 13, 2,
                              15, 8, 1, 23, 29, 9, 34, 17, 10, 4,
                              15, 2, 1, 1, 40, 8, 6, 6, 8, 1,
                              3, 24, 14, 24, 8, 14, 28, 12, 18, 7,
                              1, 5, 6, 10, 54, 12, 13, 1, 22, 45,
                              5, 12, 2, 14, 12, 1, 33, 23, 7, 5,
                              12, 5, 46, 18, 2, 2, 6, 2, 39, 7,
                              4, 4, 2, 19, 1, 5, 12, 3, 5, 1, };
    int randomArray[100];

    cout << "Time Between Arrivals of 100 Patients At A Hospital" << endl << endl;
    printArray(hospitalArray);

    histogram(hospitalArray);

cout << endl << endl << "Average of Interarrival Time is: " << averageCalculator(hospitalArray) << endl << endl;

cout << "Approximate Mathematical Equation that Describes the Density Function: " << endl;
cout << "y = f(x) = (1/" << averageCalculator(hospitalArray) << ") * e ^ (-x/" << averageCalculator(hospitalArray) << ")" << endl << endl;

expected = (1/averageCalculator(hospitalArray)) * (exp((-10/averageCalculator(hospitalArray))));
observed = .21;
chiSquared = ((observed - expected) * (observed - expected)) / expected;
cout << "Testing Probability of Waiting 10 Minutes using Chi-Square Goodness of Fit test: " << endl;
cout << "Expected Data is: " << expected << endl;
cout << "Observed Data is: " << observed << endl << endl;
cout << "x^2 = ((O-E) ^ 2) / E" << endl;
cout << "Chi-Square Results = " << chiSquared << endl << endl << endl << endl << endl << endl << endl;

populateRandomArray(randomArray, averageCalculator(hospitalArray));

    cout << "Time Between Arrivals of 100 Patients At A Hospital(Random)" << endl << endl;
    printArray(randomArray);

    histogram(randomArray);

cout << endl << endl << "Average of Interarrival Time is: " << averageCalculator(randomArray) << endl << endl;
}


