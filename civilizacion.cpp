#include "civilizacion.h"

using namespace std;

Civilizacion::Civilizacion(){}

Civilizacion::Civilizacion(const Civilizacion& c) : name(c.name), xPosition(c.xPosition), yPosition(c.yPosition), puntation(c.puntation){}

void Civilizacion::setName(const string &n){
    name = n;
}

void Civilizacion::setXPosition(const float &x){
    xPosition = x;
}

void Civilizacion::setYPosition(const float &y){
    yPosition = y;
}

void Civilizacion::setPuntation(const float &p){
    puntation = p;
}

string Civilizacion::getName(){
    return name;
}

float Civilizacion::getXPosition(){
    return xPosition;
}

float Civilizacion::getYPosition(){
    return yPosition;
}

float Civilizacion::getPuntation(){
    return puntation;
}
