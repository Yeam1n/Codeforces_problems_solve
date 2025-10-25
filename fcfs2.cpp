#include <iostream>
#include <iomanip>
using namespace std;

#define MAX 30

int main() {
    int i, j, n, t, p[MAX], bt[MAX], wt[MAX], tat[MAX];
    float awt = 0, atat = 0;

    cout << "Enter the number of processes: ";
    cin >> n;

    cout << "Enter the process numbers:\n";
    for(i = 0; i < n; i++) {
        cin >> p[i];
    }

    cout << "Enter the burst time of the processes:\n";
    for(i = 0; i < n; i++) {
        cin >> bt[i];
    }

    // Applying bubble sort to sort by burst time (SJF)
    for(i = 0; i < n; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(bt[j] > bt[j+1]) {
                // Swap burst times
                t = bt[j];
                bt[j] = bt[j+1];
                bt[j+1] = t;

                // Swap process numbers accordingly
                t = p[j];
                p[j] = p[j+1];
                p[j+1] = t;
            }
        }
    }

    cout << "Process\tBurst Time\tWaiting Time\tTurn Around Time\n";

    // Calculate waiting time and turnaround time
    for(i = 0; i < n; i++) {
        wt[i] = 0;
        tat[i] = 0;

        for(j = 0; j < i; j++) {
            wt[i] += bt[j];
        }

        tat[i] = wt[i] + bt[i];
        awt += wt[i];
        atat += tat[i];

        cout << p[i] << "\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << endl;
    }

    // Calculate averages
    awt /= n;
    atat /= n;

    cout << fixed << setprecision(2);
    cout << "Average waiting time = " << awt << endl;
    cout << "Average turn around time = " << atat << endl;

    return 0;
}
