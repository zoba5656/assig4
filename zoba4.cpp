\*My name: Rayaan Ramdan Ahmed
Class: The Second
Department: Computer Engineering*/
#include <iostream>
using namespace std;
class shape{
    protected: int r;
    int p;
    public:
    void Set_values(int r, int p)
    {r= ; p=3,14;}
    virtual int area()=0;
};
class ellipes: public shape{
    public:
    int area (){
        return(3,14);
    }
    int cricumference()=0;
};;
class circle:public ellipes{
    public:
    int area (){
        return(p*r*r);
    }
    class polygon{
        protected:
        int width ,hight, length;
        public:
        void set_values( int a, int b, int c)
        {width=a ; hight=b; length=c;}
        virtual int area ()=0;
        virtual int circuference()=0;
    };
    class Rectangle:public polygon{
        public:
        int area (){return(width*hight);}
        int circumference(){return(2width+2height);}

    };
    class triangle:public  polygon{
        public:
        int area (){return( 1\2*width*hight);}
        int circumference(){return(sum of The length);}
    };
    class square :public polygon{
        public:
        int area (){
            return(length of The side );
        }
        int circuference(){
            return (4*length of the side );

        };
        int main(){
            triangle trgl;
            Rectangle rect ;
            square sq;
            circle cir;
            shape*p1,*p2,*p3,*p4;
            p1=&trgl ;
            p2= &rect;
            p3=&sq;
            p4=&cir;
            p1-> Set_values(4,5)
            p2->set_values(4,5)
            p3->set_values(4,5,1)
            p4->set_values(3,3,14)
            cout<<rect .area()<<endl;
            cout<<rect.cirsumference()<<endl;
            cout <<trgl .area()<<endl;
            cout<<trgl.circumference()<<endl;
            cout<<squ.area()<<endl;
            cout<<squ.circumference()<<endl;
            cout<<cir.area()<<endl;
            cout<<cir.circumference ()<<endl;
        }
    };
    
}