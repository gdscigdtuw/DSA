#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int next(int num) {
    vector<int> digits;
    while (num != 0) {
        digits.push_back(num % 10);
        num = num / 10;
    }
    sort(digits.begin(), digits.end());
    int asc = 0, dsc = 0;
    for (int i = 0; i < digits.size(); i++) {
        asc = asc * 10 + digits.at(i);
        dsc = dsc * 10 + digits.at(digits.size() - i - 1);
    }
    return abs(asc - dsc);
}

vector<int> kaprekar(int n, int prev, vector<int> series) {
    int diff = next(n);
    if (diff == prev) {
        return series;
    }
    series.push_back(diff);
    return kaprekar(diff, n, series);
}

int main(int argc, char* argv[]) {
    int number, prev = 0;
    vector<int> series, k_series;
    cin >> number;
    k_series = kaprekar(number, prev, series);
    for(int n : k_series) {
        cout << n << ' ';
    }
    cout << endl;
}
