#include <iostream>
using namespace std;

int main() {
    int maintrack, sidetrack;
    cout << "Main track people: ";
    cin >> mainTrack;
    cout << "Side track people: ";
    cin >> sideTrack;

    // 功利主义
    if (sideTrack < mainTrack) {
        cout << "Utilitarianism: Pull the lever" << endl;
    } else {
        cout << "Utilitarianism: Do nothing" << endl;
    }

    // 义务论
    cout << "Deontology: Do nothing" << endl;

    return 0;
}
