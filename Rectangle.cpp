
#include <iostream>
using namespace std;
class Rectangle 
{ public:
int Perimeter();
Rectangle(int l,int b)
    { cout<<"entered perimeterized constructor"<<endl;
        flength=l;
    fbreadth=b;
    }


~Rectangle()
    { cout<<"entered default destructor"<<endl;
        
    }
    Rectangle()
    { cout<<"entered default constructor"<<endl;
        flength=5;
    fbreadth=5;
    }
public:
    int flength;
    int fbreadth;
    public :
    int Area() { return flength * fbreadth; }
    //int Perimeter() { return 2*(flength + fbreadth); }
    void setLenght(int l)
    {
        flength = l;
    }
    void setBreadth(int l)
    {
        fbreadth = l;
    }
    
    int GetLength()
    {
        return flength;
    }
};
int Rectangle::Perimeter(){
    return 2*(flength+fbreadth);
}
int main()
{
    Rectangle r;
   // cout<< "aryan:" << length()<<endl;
    cout<< "aryan_length:" << r.GetLength()<<endl;
    cout<< "aryan_breadth:" << r.fbreadth<<endl;
    int area = r.Area();
    cout<< "aryan_area:" << r.Area()<<endl;

cout<<"-------------"<<endl;
{ Rectangle a;
int flength= 10;
int fbreadth=5;
cout<<"aryan_ka_area:"<< a.Area()<<endl;
cout<<"aryan_ka_length:"<< a.flength<<endl;
cout<<"aryan_ka_breadth:"<< a.fbreadth<<endl;
a.setLenght(flength);
a.setBreadth(fbreadth);
cout<<"aryan_ka_area:"<< a.Area()<<endl;
cout<<"aryan_ka_length:"<< a.flength<<endl;
cout<<"aryan_ka_breadth:"<< a.fbreadth<<endl;
cout<<"-------------"<<endl;
Rectangle k(6,8);
cout<<"aryan_ka_area:"<< k.Area()<<endl;
cout<<"aryan_ka_length:"<< k.flength<<endl;
cout<<"aryan_ka_breadth:"<< k.fbreadth<<endl;

cout<<"aaja bhai pls:"<< k.Perimeter()<<endl;



}

    return 0;
}

