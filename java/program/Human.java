

public class Human{

    protected String name;
    protected String nik;
    protected String gender;

    Human(String name, String nik, String gender){
        this.name = name;
        this.nik = nik;
        this.gender = gender;
    }

    public String getName() {
        return name;
    }

    public String getNik() {
        return nik;
    }

    public String getGender() {
        return gender;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setNik(String nik) {
        this.nik = nik;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }

};