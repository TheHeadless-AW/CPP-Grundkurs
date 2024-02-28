#ifndef UEBUNG15_H
#define UEBUNG15_H

#include <iostream>

using namespace std;

template <typename Container>
void ElementAusgabe(const Container& container, char delimiter = '\0') {
    for (auto it = container.begin(); it != container.end(); ++it) {
        cout << *it;

        if (next(it) != container.end()) {
            if (delimiter != '\0') {
                cout << delimiter;
            }
            else {
                cout << endl;
            }
        }
    }
    cout << endl;
}

#endif // UEBUNG15_H
