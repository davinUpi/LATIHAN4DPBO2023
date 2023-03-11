#pragma once

#include <string>
#include <vector>
#include <algorithm>
#include "Course.cpp"

class Prodi{
/**
 * Class prodi memiliki atribut 
 * string name dan code. Selain itu,
 * ada vector of object address untuk
 * menampung objek Course
 * Method berupa setter dan getter
 * ada juga add dan remove untuk vector
 * of object
 */
private:

    std::string name;
    std::string code;
    std::vector<Course*> courses;

public:

    Prodi(std::string name, std::string code){
        this->name = name;
        this->code = code;
    }

    ~Prodi(){};

    void setName(std::string name){
        this->name = name;
    }

    void setCode(std::string code){
        this->code = code;
    }

    void addCourse(std::string name, std::string code){
        this->courses.push_back(new Course(name, code));
    }

    void removeCourse(std::string input){
        auto i = std::find_if(this->courses.begin(), this->courses.end(), [&input](Course* temp){return (temp->getName() == input) || (temp->getCode() == input);});
        if (i != this->courses.end()) this->courses.erase(i);
    }

    std::string getName(){
        return this->name;
    }

    std::string getCode(){
        return this->code;
    }

    const std::vector<Course*>& getCourses() {
        return this->courses;
    }

};