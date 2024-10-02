#ifndef XYPOINT_H
#define XYPOINT_H

class XYPoint {
private:
    double xPoint;
    double yPoint;

public:
    
    XYPoint(); // Default constructor
    
    
    XYPoint(double xPoint, double yPoint); // Parameterized constructor

    double getX() const; // Getter for xPoint
    double getY() const; // Getter for yPoint
    
    
    void setX(double xPoint); // Setter for xPoint
    void setY(double yPoint); // Setter for yPoint
};

#endif