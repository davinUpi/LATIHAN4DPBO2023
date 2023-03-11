import java.util.List;
import java.util.Vector;

public class Prodi {

    private String name;
    private String code;
    private Vector<Course> courses = new Vector<Course>();

    public Prodi(String name, String code){
        this.name = name;
        this.code = code;
    }

    public void setCode(String code) {
        this.code = code;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void addCourse(String name, String code){
        this.courses.add(new Course(name, code));
    }

    public void removeCourse(String input){
        this.courses.removeIf(n -> (input.equalsIgnoreCase(n.getName()) || input.equals(n.getCode())));
    }

    public String getName() {
        return name;
    }

    public String getCode() {
        return code;
    }

    public List<Course> getCourses() {
        return courses;
    }
}
