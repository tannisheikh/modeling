#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Length of data set: ";
    int data;
    cin >> data;

    if (data <= 0) {
        cout << "Invalid data length." << endl;
        return 0;
    }

    vector<double> v(data);
    cout << "Enter all data: ";
    for (int i = 0; i < data; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    double minVal = v.front();
    double maxVal = v.back();

    cout << "Enter the number of classes: ";
    int number;
    cin >> number;

    if (number <= 0 || number > data) {
        cout << "Invalid number of classes." << endl;
        return 0;
    }

    double range = (maxVal - minVal) / number;
    cout << "Each class range: " << range << endl;

    vector<int> oi(number, 0);
    for (double value : v) {
        int bin = min(int((value - minVal) / range), number - 1); 
        oi[bin]++;
    }

    double ei = (double)data / number;

    cout << "List of observed frequencies (oi): ";
    for (int freq : oi) {
        cout << freq << " ";
    }
    cout << endl;

    cout << "List of expected frequencies (ei): ";
    for (int i = 0; i < number; i++) {
        cout << ei << " ";
    }
    cout << endl;


    double D = 0.0;
    for (int i = 0; i < number; i++) {
        double diff = oi[i] - ei;
        D += (diff * diff) / ei;
    }

    cout << "Chi-square statistic (D): " << D << endl;

    double criticalValue;
    cout << "Enter critical value: ";
    cin >> criticalValue;


    if (D > criticalValue) {
        cout << "Rejected the null hypothesis." << endl;
    } else {
        cout << "Failed to reject the null hypothesis." << endl;
    }

    return 0;
}
