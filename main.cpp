/*=========================================================*/
                /*Joe Ngigi
A software program to convert analog mathematical 4 significant figure tables to digital
in compliance with the government of Kenya laptop project for primary and secondary schools
Date: 25th October 2016
The system requires that you set your terminal window to its maximum size both for the height and for the width to enhance display*/

#include <iostream>
#include <cmath>    //header file to include the math library
#include <iomanip>  //headerfile to allow manipulation of input and output
#include <sstream>  //headerfile to enable manipulation of strings
#include <stdlib.h>

//Defining a constant value y which converts the angles from radians to degrees
#define y 3.14159142/180

int operation;//choice for the operation user intends to carry out
float a,angle;//floating point variable declaration.a is the maximum angle to be input by user

using namespace std;

//Declaration of functions

void sines ();      //function to compute sines
void cosines ();    //function to compute cosines
void tangents ();   //function to compute tangents
void squares ();    //function to compute squares
void cubes  ();     //function to compute cubes
void square_roots ();//function compute square_roots
void cube_roots (); //function to compute cube_roots
void display    (); //function to display the functions
void exit();

//Definition of the sine function
void sines ()
{
    cout<<"Ready to compute sines"<<endl;
    cout<<"Enter the max angle:  "<<endl;
    cout<<"\n"<<endl;
    cin>>a;
    cout<<"\n"<<endl;
     cout<<"Angle"<<setw(10)<<".000"<<setw(10)<<".001"<<setw(10)<<".002"<<setw(10)<<".003"<<setw(10)<<".004"<<setw(10)<<".005"<<
     setw(10)<<".006"<<setw(10)<<".007"<<setw(10)<<".008"<<setw(10)<<".009\n"<<endl;

        for(angle=0.0;angle<=a;angle=angle+0.01)//for loop displays angles vertically

            {
                cout<<setprecision(4)<<fixed<<angle<<setw(10)<<sin((angle)*y)<<setw(10)<<
                sin((angle+0.001)*y)<<setw(10)<<sin((angle+0.002)*y)<<setw(10)<<sin((angle+0.003)*y)<<
                setw(10)<<sin((angle+0.004)*y)<<setw(10)<<sin((angle+0.005)*y)<<setw(10)<<sin((angle+0.006)*y)
                <<setw(10)<<sin((angle+0.007)*y)<<setw(10)<<sin((angle+0.008)*y)<<setw(10)<<sin((angle+0.009)*y)<<endl;

            }

}

//Definition of the cosine function

void cosines()
{
    cout<<"Ready to compute cosines"<<endl;
    cout<<"Enter the max angle:  "<<endl;
    cin>>a;
     cout<<"Angle"<<setw(10)<<".000"<<setw(10)<<".001"<<setw(10)<<".002"<<setw(10)<<".003"<<setw(10)<<".004"<<setw(10)<<".005"
     <<setw(10)<<".006"<<setw(10)<<".007"<<setw(10)<<".008"<<setw(10)<<".009"<<endl;

        for(angle=0.0;angle<=a;angle=angle+0.01)

            {
                cout<<setprecision(4)<<fixed<<angle<<setw(10)<<cos((angle)*y)<<setw(10)<<
                cos((angle+0.001)*y)<<setw(10)<<cos((angle+0.002)*y)<<setw(10)<<cos((angle+0.003)*y)<<
                setw(10)<<cos((angle+0.004)*y)<<setw(10)<<cos((angle+0.005)*y)<<setw(10)<<cos((angle+0.006)*y)<<
                setw(10)<<cos((angle+0.007)*y)<<setw(10)<<cos((angle+0.008)*y)<<setw(10)<<cos((angle+0.009)*y)<<endl;

            }
}


//Definition of the Tangents function
void tangents()
{
    cout<<"Ready to compute Tangents"<<endl;
    cout<<"Enter the max angle:  "<<endl;
    cin>>a;
    cout<<"Angle"<<setw(10)<<".000"<<setw(10)<<".001"<<setw(10)<<".002"<<setw(10)<<".003"<<setw(10)<<".004"<<setw(10)<<".005"<<
    setw(10)<<".006"<<setw(10)<<".007"<<setw(10)<<".008"<<setw(10)<<".009"<<endl;

        for(angle=0.0;angle<=a;angle=angle+0.01)

            {
                cout<<setprecision(4)<<fixed<<angle<<setw(10)<<tan((angle)*y)<<setw(10)<<
                tan((angle+0.001)*y)<<setw(10)<<tan((angle+0.002)*y)<<setw(10)<<tan((angle+0.003)*y)<<
                setw(10)<<tan((angle+0.004)*y)<<setw(10)<<tan((angle+0.005)*y)<<setw(10)<<tan((angle+0.006)*y)<<
                setw(10)<<tan((angle+0.007)*y)<<setw(10)<<tan((angle+0.008)*y)<<setw(10)<<tan((angle+0.009)*y)<<endl;

            }
}


//Definition of the Squares Function
void squares()
{
    cout<<"Ready to compute squares"<<endl;
    cout<<"Enter the max value:  "<<endl;
    cin>>a;
    cout<<"Angle"<<setw(10)<<".000"<<setw(10)<<".001"<<setw(10)<<".002"<<setw(10)<<".003"<<setw(10)<<".004"<<setw(10)<<".005"<<
    setw(10)<<".006"<<setw(10)<<".007"<<setw(10)<<".008"<<setw(10)<<".009"<<endl;

        for(angle=0.0;angle<=a;angle=angle+0.01)

            {
                cout<<setprecision(4)<<fixed<<angle<<setw(10)<<pow(angle,2)<<setw(10)<<
                pow((angle+0.001),2)<<setw(10)<<pow((angle+0.002),2)<<setw(10)<<pow((angle+0.003),2)<<
                setw(10)<<pow((angle+0.004),2)<<setw(10)<<pow((angle+0.005),2)<<setw(10)<<pow((angle+0.006),2)<<setw(10)<<
                pow((angle+0.007),2)<<setw(10)<<pow((angle+0.008),2)<<setw(10)<<pow((angle+0.009),2)<<endl;

            }
}

//Definition of the cubes function
void cubes()
{

    cout<<"Ready to compute cubes"<<endl;
    cout<<"Enter the max value:  "<<endl;
    cin>>a;
    cout<<"Angle"<<setw(10)<<".000"<<setw(10)<<".001"<<setw(10)<<".002"<<setw(10)<<".003"<<setw(10)<<".004"<<setw(10)<<".005"<<
    setw(10)<<".006"<<setw(10)<<".007"<<setw(10)<<".008"<<setw(10)<<".009"<<endl;

        for(angle=0.0;angle<=a;angle=angle+0.01)

            {
                cout<<setprecision(4)<<fixed<<angle<<setw(10)<<pow(angle,3)<<setw(10)<<
                pow((angle+0.001),3)<<setw(10)<<pow((angle+0.002),3)<<setw(10)<<pow((angle+0.003),3)<<
                setw(10)<<pow((angle+0.004),3)<<setw(10)<<pow((angle+0.005),3)<<setw(10)<<pow((angle+0.006),3)<<setw(10)<<
                pow((angle+0.007),3)<<setw(10)<<pow((angle+0.008),3)<<setw(10)<<pow((angle+0.009),3)<<endl;

            }

}

//Definition of the Square_roots function
void square_roots()

{
    cout<<"Ready to compute square_roots"<<endl;
    cout<<"Enter the max value:  \n"<<endl;
    cin>>a;
    cout<<"\n"<<endl;
    cout<<"Angle"<<setw(10)<<".000"<<setw(10)<<".001"<<setw(10)<<".002"<<setw(10)<<".003"<<setw(10)<<".004"<<setw(10)<<".005"<<
    setw(10)<<".006"<<setw(10)<<".007"<<setw(10)<<".008"<<setw(10)<<".009"<<endl;

        for(angle=0.0;angle<=a;angle=angle+0.01)

            {
                cout<<setprecision(4)<<fixed<<angle<<setw(10)<<sqrt(angle)<<setw(10)<<
                sqrt(angle+0.001)<<setw(10)<<sqrt(angle+0.002)<<setw(10)<<sqrt(angle+0.003)<<
                setw(10)<<sqrt(angle+0.004)<<setw(10)<<sqrt(angle+0.005)<<setw(10)<<sqrt(angle+0.006)<<setw(10)<<sqrt(angle+0.007)<<
                setw(10)<<sqrt(angle+0.008)<<setw(10)<<sqrt(angle+0.009)<<endl;

            }
}

//Definition of the Cube_roots function

void cube_roots()

{
    cout<<"Ready to compute cube_roots"<<endl;
    cout<<"Enter the max value:  \n"<<endl;
    cin>>a;
    cout<<"\n"<<endl;
    cout<<"Angle"<<setw(10)<<".000"<<setw(10)<<".001"<<setw(10)<<".002"<<setw(10)<<".003"<<setw(10)<<".004"<<setw(10)<<".005"<<
    setw(10)<<".006"<<setw(10)<<".007"<<setw(10)<<".008"<<setw(10)<<".009"<<endl;

        for(angle=0.0;angle<=a;angle=angle+0.01)

            {
                cout<<setprecision(4)<<fixed<<angle<<setw(10)<<cbrt(angle)<<setw(10)<<
                cbrt(angle+0.001)<<setw(10)<<cbrt(angle+0.002)<<setw(10)<<cbrt(angle+0.003)<<
                setw(10)<<cbrt(angle+0.004)<<setw(10)<<cbrt(angle+0.005)<<setw(10)<<cbrt(angle+0.006)<<setw(10)<<
                cbrt(angle+0.007)<<setw(10)<<cbrt(angle+0.008)<<setw(10)<<cbrt(angle+0.009)<<endl;

            }

}


//Defining the display function whose task is to display all the ratios' output to the console/terminal

void display()

{

    cout <<"\t\t\Welcome to Digital Mathematical/Trigonometric Tables!!"<<endl;
    cout <<"\t\t\======================================================"<<endl;

    fault:

    cout <<"\nPlease select the trigonometric or arithmetic operation you want to carry out."<<endl;
    cout <<"\n1.Sines\n2.Cosines\n3.tangents\n4.squares\n5.square_roots\n6.cubes\n7.Cube_roots\n8.EXIT\n\n"<<endl;
    cin>>operation;
    cout<<"\n"<<endl;

    //Switch case function to enable user to select the mathematical operation

    switch (operation)
    {

        case 1:
        operation == 1;
        sines();
        break;

        case 2:
        operation == 2;
        cosines();
        break;

        case 3:
        operation == 3;
        tangents();
        break;

        case 4:
        operation == 4;
        squares();
        break;

        case 5:
        operation == 5;
        square_roots();
        break;

        case 6:
        operation == 6;
        cubes();
        break;

        case 7:
        operation == 7;
        cube_roots();
        break;

        case 8:
        operation==8;
        exit();
        break;

        default:
        cout<<"Invalid Operation! "<<endl;


    }
     goto fault;
}

//function to terminate execution
void exit()
{
    exit(0);
}

//The main function

int main()
{
    display();
    return 0;
}
