#include "Academy.cpp"
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Prodi.cpp"
#include <iostream>
#include <string>
#include <vector>

int main(){

    Prodi ilkom("ilmu komputer", "P01");
    ilkom.addCourse("logif", "ilkom-001");
    ilkom.addCourse("siskon", "ilkom-002");

    Prodi matematika("matematika", "P02");
    matematika.addCourse("aljabar diskrit", "math-001");
    matematika.addCourse("kalkulus", "math-002");

    Mahasiswa hilmeng("Hilmy", "108374", "laki-laki" , &ilkom, "MIPA", "084172", "UPI", "mail@upi.edu");
    Mahasiswa menghil("Mihael", "98375", "Perempuan", &matematika, "MIPA", "9831", "ITS", "mail@its.edu");

    Dosen Reze("Reze", "Perempuan", "18374", "MIPA", "S3", "Pemograman", &ilkom, "UPI", "mail@upi.edu");

    std::vector<Mahasiswa*> vecOfMahasiswa;
    vecOfMahasiswa.push_back(&hilmeng);
    vecOfMahasiswa.push_back(&menghil);

    std::cout << "Mahasiswa" << std::endl;
    for(auto const &i : vecOfMahasiswa){
        std::cout<<"Nama        : "<< i->getName() << std::endl;
        std::cout<<"Nik         : "<< i->getNik() << std::endl;
        std::cout<<"Kelamin     : "<< i->getGender() << std::endl;
        std::cout<<"Nim         : "<< i->getNim() << std::endl;
        std::cout<<"Email       : "<< i->getUnivMail() << std::endl;
        std::cout<<"Universitas : "<< i->getUniversity() << std::endl;
        std::cout<<"Fakultas    : "<< i->getFac() << std::endl;
        std::cout<<"Prodi       : "<< i->getProdi()->getName() << " : "<< i->getProdi()->getCode() << std::endl;
        for(auto const &j : i->getProdi()->getCourses()){
            std::cout << "--matkul : " << j->getName() << " : " << j->getCode() << std::endl;
        }
    }

    std::cout << "Dosen" << std::endl;
    std::cout<<"Nama         : "<< Reze.getName() << std::endl;
    std::cout<<"Kelamin      : "<< Reze.getGender() << std::endl;
    std::cout<<"Nip          : "<< Reze.getNip() << std::endl;
    std::cout<<"Fakultas     : "<< Reze.getFakultas() << std::endl;
    std::cout<<"Prodi        : "<< Reze.getProdi()->getName() << " : " <<Reze.getProdi()->getCode() << std::endl;
    for(auto const& i : Reze.getProdi()->getCourses()){
        std::cout<<"-- matkul : " << i->getName() << " : " << i->getCode() << std::endl;
    }
    std::cout<<"Pen Terakhir :"<< Reze.getPendTerakhir() << std::endl;
    for(auto const& i : Reze.getSkills()){
        std::cout << "-- skill : " << i << std::endl;
    }

    std::cout<< std::endl << "setelah penghapusan" << std::endl << std::endl;

    ilkom.removeCourse("ilkom-001");
    matematika.removeCourse("kalkulus");

    std::cout << "Mahasiswa" << std::endl;
    for(auto const &i : vecOfMahasiswa){
        std::cout<<"Nama        : "<< i->getName() << std::endl;
        std::cout<<"Nik         : "<< i->getNik() << std::endl;
        std::cout<<"Kelamin     : "<< i->getGender() << std::endl;
        std::cout<<"Nim         : "<< i->getNim() << std::endl;
        std::cout<<"Email       : "<< i->getUnivMail() << std::endl;
        std::cout<<"Universitas : "<< i->getUniversity() << std::endl;
        std::cout<<"Fakultas    : "<< i->getFac() << std::endl;
        std::cout<<"Prodi       : "<< i->getProdi()->getName() << " : "<< i->getProdi()->getCode() << std::endl;
        for(auto const &j : i->getProdi()->getCourses()){
            std::cout << "--matkul : " << j->getName() << " : " << j->getCode() << std::endl;
        }
    }

    std::cout << "Dosen" << std::endl;
    std::cout<<"Nama         : "<< Reze.getName() << std::endl;
    std::cout<<"Kelamin      : "<< Reze.getGender() << std::endl;
    std::cout<<"Nip          : "<< Reze.getNip() << std::endl;
    std::cout<<"Fakultas     : "<< Reze.getFakultas() << std::endl;
    std::cout<<"Prodi        : "<< Reze.getProdi()->getName() << " : " <<Reze.getProdi()->getCode() << std::endl;
    for(auto const& i : Reze.getProdi()->getCourses()){
        std::cout<<"-- matkul : " << i->getName() << " : " << i->getCode() << std::endl;
    }
    std::cout<<"Pen Terakhir :"<< Reze.getPendTerakhir() << std::endl;
    for(auto const& i : Reze.getSkills()){
        std::cout << "-- skill :" << i << std::endl;
    }

    return 0;
}