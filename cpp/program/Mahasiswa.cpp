#pragma once

#include <iostream>
#include <string>
#include "Human.cpp"
#include "Academy.cpp"
#include "Prodi.cpp"

class Mahasiswa : public Human, public Academy
{

private:
    std::string nim;
    Prodi* prodi;
    std::string fakultas;

public:
    Mahasiswa(
        std::string newName,
        std::string newNim,
        std::string newGender,
        Prodi* newProdi,
        std::string newFac,
        std::string newNik,
        std::string newUniversity,
        std::string newUnivMail
        )
        {
            this->name = newName;
            this->nim = newNim;
            this->prodi = newProdi;
            this->fakultas = newFac;
            this->nik = newNik;
            this->gender = newGender;
            this->university = newUniversity;
            this->univ_mail = newUnivMail;
        }

    ~Mahasiswa(){}

    //Setter
    void setNim(std::string newNim)
    {
        this->nim = newNim;
    }
    void setProdi(Prodi* newProdi)
    {
        this->prodi = newProdi;
    }
    void setFac(std::string newFac)
    {
        this->fakultas = newFac;
    }

    //getter
    std::string getNim()
    {
        return this->nim;
    }
    Prodi* getProdi()
    {
        return this->prodi;
    }
    std::string getFac()
    {
        return this->fakultas;
    }

};