#include<iostream>
#include<iomanip>
using namespace std;

 class Color {

    int red;
    int blue;
    int green;

    public:
    void setRed(int i){ red = i;}
    void setBlue(int i){ blue = i;}
    void setGreen(int i){ green = i;}

    int getRed(){return red;}
    int getBlue(){return blue;}
    int getGreen(){return green;}

    void print(int i){
        cout <<  left << "color" << setw(5)<< i+1  << "red: "
        << setw(5) << red  << "blue: "<< setw(5) << blue 
        << "green: " << green << endl;
    }
 };
 int main(){
    srand(time(0));

    vector<Color> colors(5);
    for(int i = 0; i<5; i++){
        colors[i].setRed (rand() % 256);
        colors[i].setGreen (rand() % 256);
        colors[i].setBlue (rand() % 256);
       
        colors[i].print(i);
    }

    return 0;
 }