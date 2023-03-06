from Human import *

class Civitas(Human):
    
    def __init__(self, name, nik, gender, university, email):
        super().__init__(name, nik, gender)
        self._university = university
        self._email = email
    
    def setUniversity(self, university):
        self._university = university
    
    def setEmail(self, email):
        self._email = email
    
    def getUniversity(self):
        return self._university
    
    def getEmail(self):
        return self._email