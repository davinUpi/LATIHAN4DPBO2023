from Civitas import *

class Mahasiswa(Civitas):
    '''
    Kelas untuk menampung data2 Mahasiswa
    terdiri dari atribut2 Civitas dan juga
    atribut tambahan 
    Masing2 dapat diset menggunakan setter
    Masing2 dapat diambil menggunakan getter
    '''   
    
    def __init__(self, name, nim, gender, prodi, fakultas, nik, universitas, email):
        super().__init__(name, nik, gender, universitas, email)
        self._nim = nim
        self._prodi = prodi
        self._fakultas = fakultas
    
    #Setter
    
    def setNim(self, nim):
        self._nim = nim
    
    def setProdi(self, prodi):
        self._prodi = prodi
        
    def setFac(self, fakultas):
        self.fakultas = fakultas
    
    #getter
    
    def getNim(self):
        return self._nim
    
    def getProdi(self):
        return self._prodi
    
    def getFac(self):
        return self._fakultas