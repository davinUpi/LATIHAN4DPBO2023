public class Course {
    private String name;
    private String code;

    public Course(String name, String code){
        this.name = name;
        this.code = code;
    }

    void setName(String name){
        this.name = name;
    }

    void setCode(String code){
        this.code = code;
    }

    String getName(){
        return this.name;
    }

    String getCode(){
        return this.code;
    }
}
