class Programmer extends Employee{

    //overloading medthod
    public void skill(){
        System.out.println("No Skill");
    }

    public void skill(String lang){
        System.out.println(lang);
    }
    
    public void skill(String ...lang){ // Array Arugument
        for(int i=0; i<lang.length; i++){
            System.out.println("Skill = " + lang[i]);
        }
    }

}
