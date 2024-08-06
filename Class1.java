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