#include <iostream>
using namespace std;
class rectangle
{
    public:
    int fLength, fBreadth;
    public:
    rectangle()
    {cout<<"entered default constructor"<<endl;
        fLength=1;
    fBreadth=1;}
    ~rectangle()
    {cout<<"destructor called"<<endl;}
   rectangle(int L, int B)
   {cout<<"entered default parameterized constructor"<<endl;
    fLength=L;
   fBreadth=B;}
    int Area()
    {
        return fLength * fBreadth;
    }

    int perimeter();

    void Setlength(int l)
    {
        fLength = l;
    }
    int Getlength()
    {
        return fLength;

    }

    void Setbredth(int b)
    {
        fBreadth = b;
    }
    int GetBreadth()
    {
        return fBreadth;
    }
};
int rectangle::perimeter()
{return 2*(fLength+fBreadth);}
int main()
{
    rectangle r;
    int area = r.Area();
    int perimeter = r.perimeter();
    cout<<"length"<<r.fLength<<endl;
    cout<<"breadth"<<r.fBreadth<<endl;
    cout<<"ritam"<<r.Area()<<endl;
    cout<<"_____________________________"<<endl;
   
   rectangle rnew;
   int fLength=10;
   int fBreadth=5;
   int area1=rnew.Area();
   rnew.Setlength(fLength);
   rnew.Setbredth(fBreadth);
   cout<<"length"<<rnew.fLength<<endl;
   cout<<"breadth"<<rnew.fBreadth<<endl;
    cout<<"area"<<rnew.Area()<<endl;
   cout<<"_____________________________"<<endl;

   rectangle k(6,8);
   cout<<"length"<<k.fLength<<endl;
   cout<<"breadth"<<k.fBreadth<<endl;
    cout<<"area"<<k.Area()<<endl;
cout<<"perimeter"<<k.perimeter()<<endl;
    return 0;
}
