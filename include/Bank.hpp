#ifndef BANK_HPP
#define BANK_HPP

#include <string>
#include <vector>
#include "Kunde.hpp"

using namespace std;

class Bank
{
private:
    string name;
    vector<Kunde*> kunden;


public:
    // Konstruktor
    Bank();
    Bank(string _name);
    ~Bank();

    // Getter
    Kunde* getKunde(int _id);
    string getName();

    // Setter
    void setName(string _name);
    void addKunde(Kunde* k);

    // Funktionen
    void outputKunde(int _id);
};

#endif