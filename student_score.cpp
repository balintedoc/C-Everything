#include <iostream>
using namespace std;

/* ===== FUNCTION PROTOTYPES ===== */
void inputScores(int scores[], int size);
double calculateAverage(const int scores[], int size);
char calculateGrade(double average);
int highestScore(const int scores[], int size);
void bonusPoints(int scores[], int size, int bonus = 5);
int sumScoresRecursive(const int scores[], int size);

/* ===== MAIN ===== */
int main() {
    const int SIZE = 5;
    int scores[SIZE];

    inputScores(scores, SIZE);

    double avg = calculateAverage(scores, SIZE);
    char grade = calculateGrade(avg);
    int highest = highestScore(scores, SIZE);

    cout << "\n--- Student Report ---\n";
    cout << "Average Score: " << avg << endl;
    cout << "Grade: " << grade << endl;
    cout << "Highest Score: " << highest << endl;

    bonusPoints(scores, SIZE);   // default bonus

    cout << "\nAfter Bonus Points:\n";
    for (int i = 0; i < SIZE; i++)
        cout << scores[i] << " ";

    cout << "\nTotal Score (Recursive): "
        << sumScoresRecursive(scores, SIZE) << endl;

    return 0;
}

/* ===== FUNCTION DEFINITIONS ===== */

void inputScores(int scores[], int size) {
    cout << "Enter " << size << " scores:\n";
    for (int i = 0; i < size; i++)
        cin >> scores[i];
}

double calculateAverage(const int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += scores[i];
    return static_cast<double>(sum) / size;
}

char calculateGrade(double average) {
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= 60) return 'D';
    return 'F';
}

int highestScore(const int scores[], int size) {
    int max = scores[0];
    for (int i = 1; i < size; i++)
        if (scores[i] > max)
            max = scores[i];
    return max;
}

void bonusPoints(int scores[], int size, int bonus) {
    for (int i = 0; i < size; i++)
        scores[i] += bonus;
}

int sumScoresRecursive(const int scores[], int size) {
    if (size == 0)
        return 0;
    return scores[size - 1] + sumScoresRecursive(scores, size - 1);
}

