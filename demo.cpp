#include <iostream>

using namespace std;

void menu() {
    cout << "1. Zogsoold mashin nemeh" << endl;
    cout << "2. Zogsooloos mashin hasah" << endl;
    cout << "3. Zogsooloos mashin gargah" << endl;
    cout << "0. Programmaas garah" << endl;
}
void addcar() {

}
int main () {
    int user = -1;
    while (user != 0) {
        menu();
        cin >> user;

        switch(user) {
            case 1 :
                addcar();
            default :
                cout << "Sohor yumuu iim too bhku bgazde" << endl;
        }
    }
}