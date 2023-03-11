import java.util.Vector;

public class Dosen extends Human {
    private String nip;
    private String pend_terakhir;
    private String fakultas;
    private Prodi prodi;
    private Vector<String> skills = new Vector<String>();

    public Dosen(String name, String nik, String gender, String nip, String pend_terakhir, String fakultas, Prodi prodi, String skill){
        super(name, nik, gender);
        this.nip = nip;
        this.pend_terakhir = pend_terakhir;
        this.fakultas = fakultas;
        this.prodi = prodi;
        this.skills.add(pend_terakhir);
    }

    public void setNip(String nip) {
        this.nip = nip;
    }

    public void setPend_terakhir(String pend_terakhir) {
        this.pend_terakhir = pend_terakhir;
    }

    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public void setProdi(Prodi prodi) {
        this.prodi = prodi;
    }

    public void setSkills(Vector<String> skills) {
        this.skills = skills;
    }

    public void addSkill(String skill){
        this.skills.add(skill);
    }

    public void removeSkill(String skill){
        this.skills.remove(skill);
    }

    public String getNip() {
        return nip;
    }

    public String getPend_terakhir() {
        return pend_terakhir;
    }

    public String getFakultas() {
        return fakultas;
    }

    public Prodi getProdi() {
        return prodi;
    }

    public Vector<String> getSkills() {
        return skills;
    }
}
