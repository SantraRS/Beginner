public class Class1{
    String sName;
    int sSides;
    void vol(int sSides)
    {
        System.out.println(+sSides);
    }
}
class shapedemo{
    public static void main(String[] args)
    {
        Class1 myshape = new Class1();
        myshape.sName="triangle";
        myshape.sSides=3;
        myshape.vol(3);
    }
}
/*
Error: Main method not found in class Class1, please define the main method as:
   public static void main(String[] args)
or a JavaFX application class must extend javafx.application.Application
*/
