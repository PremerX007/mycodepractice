class Employee {

    // Attribute Zone
    private String id;
    private String name;
    private Double saraly;

    // Static Attribute
    static int minimumSaraly = 10000;
    
    // Defeult Constructor (init)
    public Employee(String id, String name, Double saraly){
        this.id = id;
        this.name = name;
        this.saraly = saraly;
    }

    public Employee(){
        System.out.println("I'm Employee");
    }

    // Method Zone
    public void setID(String new_id){
        this.id = new_id;
    }

    public void setName(String new_name){
        this.name = new_name;
    }

    public void setSalary(double new_saraly){
        this.saraly = new_saraly;
    }

    public String getID(){
        return this.id;
    }
    
    public String getName(){
        return this.name;
    }
    
    public double getSaraly(){
        return this.saraly;
    }
    
    public void bonus(){
        System.out.println("Bonus = 10%");
    }

    public void displayInfo(){
        System.out.println("ID : " + this.id);
        System.out.println("Name : " + this.name);
        System.out.println("Saraly : " + this.saraly + "\n");
    }
    

}
