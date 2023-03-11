#pragma once

#include <string>
#include <vector>
#include "Human.cpp"
#include "Academy.cpp"
#include "Prodi.cpp"

class Dosen : public Human, public Academy{
    /**
     * Class dosen  turunan dari kelas Human dan
     * Academy. Terdiri dari atribut string
     * nip, pend_terakhir, fakultas. Selain itu,
     * mmemiliki atribut Prodi.
     * Methode hanya berupa setter getter
     */

private:

    std::string nip;
    std::string pend_terakhir;
    std::string fakultas;
    std::vector<std::string> skills;
    Prodi* prodi;

public:

    Dosen(
        std::string name,
        std::string gender,
        std::string nip,
        std::string fakultas,
        std::string pen_terakhir,
        std::string skill,
        Prodi* prodi,
        std::string university,
        std::string email,
        std::string nik = ""
    ){
        this->nik = nik;
        this->nip = nip;
        this->name = name;
        this->gender = gender;
        this->fakultas = fakultas;
        this->university = university;
        this->prodi = prodi;
        this->univ_mail = email;
        this->skills.push_back(skill);
    }

    ~Dosen(){};

    void setNip(std::string nip){
        this->nip = nip;
    }

    void setFakultas(std::string fakultas){
        this->fakultas = fakultas;
    }

    void setPendTerakhir(std::string pend_terakhir){
        this->pend_terakhir = pend_terakhir;
    }

    void setProdi(Prodi* prodi){
        this->prodi = prodi;
    }

    void addSkill(std::string skill){
        this->skills.push_back(skill);
    }

    void removeSkill(std::string skill){
        auto i = std::find(this->skills.begin(), this->skills.end(), skill);
        if (i != this->skills.end()) this->skills.erase(i);
        else printf("Skill not found!\n");
    }

    std::string getNip(){
        return this->nip;
    }

    std::string getPendTerakhir(){
        return this->pend_terakhir;
    }

    std::string getFakultas(){
        return this->fakultas;
    }

    Prodi* getProdi(){
        return this->prodi;
    }

    const std::vector<std::string>& getSkills(){
        return this->skills;
    }

    std::string getSkill(std::string skill){
        auto i = std::find(this->skills.begin(), this->skills.end(), skill);
        if(i != this->skills.end()) return *i;
        else return "";
    }

};