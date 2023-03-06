from Mahasiswa import *
from Human import *
from Prodi import *
from Dosen import *

Ilkom = Prodi("Ilkom", "P01")
Ilkom.addCourse("Logif", "Ilkom-001")
Ilkom.addCourse("Siskon", "Ilkom-002")

Matematika = Prodi("Matematika", "P02")
Matematika.addCourse("Aljabar Dsikrit", "Math-001")
Matematika.addCourse("Kalkulus", "Math-002")

hilmeng = Mahasiswa("Hilmy", "108374", "Laki-laki", Ilkom, "MIPA", "084172", "UPI", "mail@upi.edu")
menghil = Mahasiswa("Mihael", "98375", "Perempuan", Matematika, "MIPA", "9831", "ITS", "mail@its.edu")

Reze = Dosen("Reze", "Perempuan", "18374", "MIPA", "S3", "Pemograman", Ilkom, "UPI", "mail@upi.edu")

students = []
students.append(hilmeng)
students.append(menghil)

print("Dosen")
print("Nama        :" + Reze.getName())
print("NIP         :" + Reze.getNip())
print("Kelamin     :" + Reze.getGender())
print("Pen Terakhir:" + Reze.getPenTerakhir())
print("Skill       :" + Reze.getSkill())
print("Email       :" + Reze.getEmail())
print("Universitas :" + Reze.getUniversity())
print("Prodi       :" + Reze.getProdi().getName())
print("Fakultas    :" + Reze.getFakultas())
print(" ")
print("matkul-nya")
for i in Reze.getProdi().getCourses():
    print(i.getName() + " " + i.getCode())

print("\n")
print("Mahasiswa:")
for i in students:
    print("Nama        :" + i.getName())
    print("NIM         :" + i.getNim())
    print("Kelamin     :" + i.getGender())
    print("Email       :" + i.getEmail())
    print("Universitas :" + i.getUniversity())
    print("Prodi       :" + i.getProdi().getName())
    print("Fakultas    :" + i.getFac())
    print(" ")
    print("Matkul-nya")
    for j in i.getProdi().getCourses():
        print(j.getName() + " " + j.getCode())
    print("\n")

Matematika.removeCourse("Math-001")
Ilkom.removeCourse("Ilkom-001")

print("Mahasiswa setelah penghapusan")
for i in students:
    print("Nama        :" + i.getName())
    print("NIM         :" + i.getNim())
    print("Kelamin     :" + i.getGender())
    print("Email       :" + i.getEmail())
    print("Universitas :" + i.getUniversity())
    print("Prodi       :" + i.getProdi().getName())
    print("Fakultas    :" + i.getFac())
    print(" ")
    print("Matkul-nya")
    for j in i.getProdi().getCourses():
        print(j.getName() + " " + j.getCode())
    print("\n")