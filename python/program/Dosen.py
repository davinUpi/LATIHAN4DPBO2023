from Civitas import *

class Dosen(Civitas):
    
    def __init__(self, name, gender, nip, fakultas, pen_terakhir, skill, prodi, universitas, email, nik = ""):
        super().__init__(name, nik, gender, universitas, email)
        self._nip = nip
        self._fakultas = fakultas
        self._pen_terakhir = pen_terakhir
        self._skill = skill
        self._prodi = prodi
        self._university = universitas
        self._email = email
    
    def setNip(self, nip):
        self._nip = nip
    
    def setFakultas(self, fakultas):
        self._fakultas = fakultas
    
    def setPenTerakhir(self, pen_terakhir):
        self._pen_terakhir = pen_terakhir
    
    def setSkill(self, skill):
        self._skill = skill
    
    def setProdi(self, prodi):
        self._prodi = prodi
    
    def getNip(self):
        return self._nip
    
    def getFakultas(self):
        return self._fakultas
    
    def getPenTerakhir(self):
        return self._pen_terakhir
    
    def getSkill(self):
        return self._skill
    
    def getProdi(self):
        return self._prodi