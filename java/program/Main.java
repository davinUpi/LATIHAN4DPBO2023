import java.util.Vector;

public class Main {
    public static void main(String[] args) {
      Vector<Civitas> civitas = new Vector<Civitas>();
      Prodi ilkom = new Prodi("ilkom", "P01");
      ilkom.addCourse("logif", "ilkom-001");
      ilkom.addCourse("siskon", "ilkom-002");

      Prodi matematika = new Prodi("matematika", "P02");
      matematika.addCourse("aljabar diskrit", "math-001");
      matematika.addCourse("kalkulus", "math-002");

      civitas.add(new Civitas("Hilmy", "108374", ilkom, "MIPA", "084172", "laki-laki", "UPI", "mail@upi.edu"));
      civitas.add(new Civitas("Mihael", "98375", matematika, "MIPA", "9831", "perempuan", "ITS", "mail@its.edu"));

      Dosen Reze = new Dosen("Reze", null, "perempuan", "18374", "S3", "MIPA", ilkom, "Pemograman");

      printDosen(Reze);
      printCivitas(civitas);

      System.out.println("Setelah delete");

      ilkom.removeCourse("siskon");
      matematika.removeCourse("math-001");

      printDosen(Reze);
      printCivitas(civitas);
    }

    public static void printCivitas(Vector<Civitas> civitas){
      System.out.println("Mahasiswa");
      for(Civitas i : civitas ){
        System.out.printf("Nama         : %s\n", i.getName());
        System.out.printf("Nik          : %s\n", i.getNik());
        System.out.printf("Kelamin      : %s\n", i.getGender());
        System.out.printf("Nim          : %s\n", i.getNim());
        System.out.printf("Email        : %s\n", i.getEmail());
        System.out.printf("Universitas  : %s\n", i.getUniversity());
        System.out.printf("Fakultas     : %s\n", i.getFakultas());
        System.out.printf("Prodi        : %s - %s\n", i.getProdi().getName(), i.getProdi().getCode());
        for(Course j : i.getProdi().getCourses()){
          System.out.printf("-- Nama         : %s\n", j.getName());
          System.out.printf("-- Code         : %s\n", j.getCode());
        }
      }
    }

    public static void printDosen(Dosen dosen){
      System.out.println("Dosen");
      System.out.printf("Nama         : %s\n", dosen.getName());
      System.out.printf("Kelamin      : %s\n", dosen.getGender());
      System.out.printf("Nip          : %s\n", dosen.getNip());
      System.out.printf("Fakultas     : %s\n", dosen.getFakultas());
      System.out.printf("pend terakhir: %s\n", dosen.getPend_terakhir());
      System.out.printf("Prodi        : %s - %s\n", dosen.getProdi().getName(), dosen.getProdi().getName());
      for(Course i : dosen.getProdi().getCourses()){
        System.out.printf("-- Nama         : %s\n", i.getName());
        System.out.printf("-- Code         : %s\n", i.getCode());
      }
      for(String i : dosen.getSkills()){
        System.out.printf("Skill        : %s\n", i);
      }
    }
  }