#ifndef KUNDE_HPP
#define KUNDE_HPP

#include <string>

class Kunde
{
private:
    int id;
    std::string name;
    std::string email;
    std::string telefon;

public:
    Kunde();
    Kunde(int id, const std::string& name, const std::string& email, const std::string& telefon);
    ~Kunde();

    // Getter
    int getId() const;
    std::string getName() const;
    std::string getEmail() const;
    std::string getTelefon() const;

    // Setter
    void setId(int id);
    void setName(const std::string& name);
    void setEmail(const std::string& email);
    void setTelefon(const std::string& telefon);
};

#endif // KUNDE_HPP