from Course import *

class Prodi:
    '''
    Kelas Prodi memiliki atribut
    name, code, dan courses.
    courses merupakan array of object
    Course yang menjadi komponen.
    '''
    def __init__(self, name, code):
        self._name = name
        self._code = code
        self._courses = []
    
    # setter
    
    def setName(self, name):
        self._name = name
    
    def setCode(self, code):
        self._code = code
    
    def setCourses(self, course):
        self._courses = course
    
    # setter untuk Course berupa add dan remove
    # add untuk menambahkan Course, remove untuk sebaliknya
    
    def addCourse(self, course, course_code):
        found = False
        for i in self._courses:
            if i.getName() == course or i.getCode() == course_code:
                found = True
                break
        
        if found == False:
            self._courses.append(Course(course, course_code))
        
    
    def removeCourse(self, course):
        for i in self._courses:
            if i.getName() == course or i.getCode() == course:
                self._courses.remove(i)
                break
        
    # getter
        
    def getName(self):
        return self._name
    
    def getCode(self):
        return self._code
    
    def getCourses(self):
        return self._courses
    
    def getCourse(self, course):
        result =  [i for i in self._courses if i == course]
        return result