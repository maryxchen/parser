//
//  Rectangle.cpp
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

//  ECE244 Student: Write the implementation of the class here
#include <iostream>
#include <string>
#include <iomanip>
#include "Shape.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(string name, float xcen, float ycen, float width, float height):Shape(name, xcen, ycen){
    width = width;
    height = height;
}

Rectangle::~Rectangle(){

}

float Rectangle::getWidth() const{
    return width;
}

float Rectangle::getHeight() const{
    return height;
}

void Rectangle::setWidth(float swidth){
    width = swidth;
}

void Rectangle::setHeight(float sheight){
    height = sheight;
}

void Rectangle::draw() const{
    cout << std::fixed;
    cout << std:: setprecision(2);

    cout << "rectangle: " << name << " "
            << x_centre << " "
            << y_centre << " "
            << width << " "
            << height << " "
            << computeArea() << endl;
}

float Rectangle::computeArea() const {
    return (width*height);
}

Shape* Rectangle::clone() const {
    Shape* newRec = new Rectangle(this->name, this->x_centre, this->y_centre, this->width, this->height); //deferenced this////
    //or do
    //Shape* newRec = new Rectangle(*this);
    return newRec;
}