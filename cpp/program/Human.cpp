#pragma once

#include <string>

using namespace std;

class Human{

protected:
    string nik;
    string name;
    string gender;

public:

    Human(string nik = "", string name = "", string gender = ""){
        this->nik = nik;
        this->name = name;
        this->gender = gender;
    }

    ~Human(){};

    //
    // Setters, to set the values
    //
    void setNik(string nik){
        this->nik = nik;
    }

    void setName(string name){
        this->name = name;
    }

    void setGender(string gender){
        this->gender = gender;
    }

    //
    // Getters, to get val
    //

    string getNik(){
        return this->nik;
    }

    string getName(){
        return this->name;
    }

    string getGender(){
        return this->gender;
    }

};