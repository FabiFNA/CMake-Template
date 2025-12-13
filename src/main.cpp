#include <iostream>

#include "Kunde.hpp"
#include "Bank.hpp"

#include <chrono>
#include <thread>

using namespace std;

int main() {
    cout << "Hello, world!" << endl;

    
    /*    
    Als nächstes Run Methode implementieren
    Befehle wie ADD oder REMOVE oder LIST der kunden implementieren
    */


    Bank b("Große Bank");

    Kunde k(1, "Max", "max@gmail.com", "+49123456789");

    b.addKunde(&k);

    b.outputKunde(1);

    Kunde k2(2, "Max", "max@gmail.com", "+49123456789");
    b.addKunde(&k2);

    b.outputKunde(2);

    Kunde k3(3, "Max", "max@gmail.com", "+49123456789");
    b.addKunde(&k3);

    b.outputKunde(3);




    return 0;
}
