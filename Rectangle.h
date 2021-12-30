//
//  Rectangle.h
//  Lab5
//
//  Created by Tarek Abdelrahman on 2020-11-25.
//  Copyright © 2020 Tarek Abdelrahman.
//
//  Permission is hereby granted to use this code in ECE244 at
//  the University of Toronto. It is prohibited to distribute
//  this code, either publicly or to third parties.

#ifndef Rectangle_h
#define Rectangle_h

#include <iostream>
#include <string>
using namespace std;

class Rectangle : Shape{
private:
    float width;
    float height;

public:
    Rectangle(string name, float xcen, float ycen, float width, float height); //constructor

    //destructor
    virtual ~Rectangle();

    //Accessor
    float getWidth() const;
    float getHeight() const;

    //Mutators
    void setWidth(float swidth);
    void setHeight(float sheight);

    //Utility methods
    virtual void draw() const;
    virtual float computeArea() const;
    virtual Shape* clone() const;
};

// This class implements the rectangle Shape objects.
// ECE244 Student: Write the definition of the class here.


#endif /* Rectangle_h */


