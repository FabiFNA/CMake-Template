#include <iostream>

#include "Kunde.hpp"
#include "Bank.hpp"

using namespace std;

int main() {
    cout << "Hello, world!" << endl;

    Bank b("Große Bank");

    Kunde k(1, "Max", "max@gmail.com", "+49123456789");

    b.addKunde(&k);

    b.outputKunde(1);

    return 0;
}
