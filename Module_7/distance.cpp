#include <iostream>
#include <conio.h>
//using namespace std;

class Distance
{
private:
   int feet;
   float inches;
public:

    Distance()          //constructor1
    {
        feet=0;
        inches=0;
    }

    Distance(int ft,float inch)       //constructor2
    {
        feet=ft;
        inches=inch;
    }

    void getdata()
    {
        std::cout<<"Enter Feet and inches respectively: ";
        std::cin>>feet>>inches;
    }

    void display()
    {
        std::cout<<"Feet : "<<feet<<std::endl;
        std::cout <<"Inches :"<<inches;
    }

    //Operator declaration in Class
    friend Distance operator + (Distance &ob1, Distance &ob2)
    {
        Distance temp;
        temp.feet   = ob1.feet   + ob2.feet;
        temp.inches = ob1.inches + ob2.inches;
        if(temp.inches > 12)
        {
        temp.inches -= 12;
        temp.feet++;
        }
        return(temp);
    }

    friend Distance operator - (Distance &ob1, Distance &ob2)
    {
        Distance temp;
        temp.feet = ob1.feet - ob2.feet;
        temp.inches = ob1.inches - ob2.inches;

        if(temp.inches < 0) {
            temp.inches += 12;
            temp.feet--;
        }
        return(temp);
    }

    friend Distance operator *(int d, Distance &ob)
    {
        Distance temp;
        temp.feet = ob.feet * d;
        temp.inches = ob.inches * d;

        while(temp.inches > 12) {
            temp.inches -= 12;
            temp.feet++;
        }

        return temp;
    }

    friend int operator ==(Distance &ob1, Distance &ob2)
    {
        if(!(ob1.feet == ob2.feet))
            return 0;
        else if(!(ob1.inches == ob2.inches))
            return 0;
        
        return 1;
    }

    friend int operator < (Distance &ob1, Distance &ob2)
    {
        if(!(ob1.feet < ob2.feet))
            return 0;
        else if(!(ob1.inches < ob2.inches))
            return 0;
        
        return 1;
    }

    friend int operator > (Distance &ob1, Distance &ob2)
    {
        if(!(ob1.feet > ob2.feet))
            return 0;
        else if(!(ob1.inches > ob2.inches))
            return 0;
        
        return 1;
    }

};
