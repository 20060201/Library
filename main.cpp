#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    int total = 0;
    cin >> N;
    int book[N][2];
    vector <int> number;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> book[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        if (book[i][1] - 100 > 0) {
            number.push_back(book[i][0]);
            total += (book[i][1] - 100) * 5;
        } 
    }

    for (int i = 0; i < number.size(); i++) {
        cout << number[i] << " ";
    }
    cout << endl << total << endl;

}
