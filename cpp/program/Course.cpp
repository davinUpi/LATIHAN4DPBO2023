#pragma once

#include <string>

class Course{
    /**
     * Class course menampung mata kuliah.
     * Teridiri dari 2 atribut string:
     * nama dan kode
     */
private:
    std::string name;
    std::string code;

public:

    Course(std::string name, std::string code){
        this->name = name;
        this->code = code;
    }

    ~Course(){};

    void setName(std::string name){
        this->name = name;
    }

    void setCode(std::string code){
        this->code = code;
    }

    std::string getName(){
        return this->name;
    }

    std::string getCode(){
        return this->code;
    }

};