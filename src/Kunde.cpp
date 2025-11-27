#include "Kunde.hpp"
#include <string>

// --- Konstruktor ---

Kunde::Kunde()
{
    id = 0;
    name = "???";
    email = "???";
    telefon = "???";
}

Kunde::Kunde(int id, const std::string &name, const std::string &email, const std::string &telefon)
{
    this->id = id;
    this->name = name;
    this->email = email;
    this->telefon = telefon;
}

Kunde::~Kunde()
{
}

// --- Getter ---

int Kunde::getId() const
{
    return this->id;
}

std::string Kunde::getName() const
{
    return this->name;
}

std::string Kunde::getEmail() const
{
    return this->email;
}

std::string Kunde::getTelefon() const
{
    return this->telefon;
}

/// --- Setter ---

void Kunde::setId(int id)
{
    this->id = id;
}

void Kunde::setName(const std::string &name)
{
    this->name = name;
}

void Kunde::setEmail(const std::string &email)
{
    this->email = email;
}

void Kunde::setTelefon(const std::string &telefon)
{
    this->telefon = telefon;
}
