from enum import Enum

class GENDER(Enum):
    MALE = 0
    FEMALE = 1
    ATTACK_HELICOTER = 2

class Human:
    '''
    Kelas ini memilikia tribut nama, nik, dan gender.
    Untuks aat ini, gender berupa string
    '''
    def __init__(self, name, nik, gender):
        self._name = name
        self._nik = nik
        self._gender = gender

    '''
    Metode2 masih ebrupa setter dan getter
    '''

    def setName(self, name):
        self._name = name

    def setNik(self, nik):
        self._nik = nik

    def setGender(self, gender):
        self._gender = gender

    def getName(self):
        return self._name

    def getNik(self):
        return self._nik

    def getGender(self):
        return self._gender