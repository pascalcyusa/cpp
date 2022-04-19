//
//  main.cpp
//  functionDefinition
//
//  Created by Jean Pascal Cyusa Shyaka on 4/19/22.
//

#include <iostream>

// function prototypes
double calc_volumeCylinder(double radius, double height);
double calc_areaCircle(double radius);
void areaCircle();
void volumeCylinder();



using namespace std;

const double Pi {3.14159};

// Area of a circle

double calc_areaCircle(double radius) {
    return Pi*radius*radius;
}

void areaCircle() {
    double radius {};
    cout << "Enter the radius of the circle: "; cin >> radius;
    cout << "\n\tThe area of a circle with a " << radius << " ft radius is " << calc_areaCircle(radius)
    << " sq ft."<< endl << endl;
}

// Voume of a cylinder

double calc_volumeCylinder(double radius, double height) {
    return calc_areaCircle(radius)*height;
}

void volumeCylinder() {
    double radius,height {};
    cout << "Enter the radius of the cylinder: "; cin >> radius;
    cout << "\nEnter the height of the cylinder: "; cin >> height;
    cout << "\n\tThe volume of a cylinder with radius " << radius << " ft and height " << height
    << " ft is " << calc_volumeCylinder(radius, height) << " cubic ft." << endl << endl;
}

int main () {
    areaCircle();
    volumeCylinder();
    
    return 0;
}



