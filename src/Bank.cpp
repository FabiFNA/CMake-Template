#include <iostream>
#include "Bank.hpp"

using namespace std;

Bank::Bank()
{
    this->name = "???";
}

Bank::Bank(string _name)
{
    this->name = _name;
}

Bank::~Bank()
{
}

Kunde *Bank::getKunde(int _id)
{
    for (int i = 0; i < kunden.size(); i++)
    {
        
    }

    return nullptr;
}

string Bank::getName()
{
    return string();
}

void Bank::setName(string _name)
{
    this->name = _name;
}

void Bank::addKunde(Kunde *k)
{
    kunden.push_back(k);
}

void Bank::outputKunde(int _id)
{
    for (int i = 0; i < kunden.size(); i++)
    {
        if (kunden[i]->getId() == _id)
        {
            cout << "Kunde Nr: " << kunden[i]->getId() << endl;
            cout << "Name: " << kunden[i]->getName() << endl
            <<  "Email: " << kunden[i]->getEmail() << endl
            <<  "Telefon: " << kunden[i]->getTelefon() << endl;
        }
    }
}
