#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Civilizacion
{
    private:
        std::string name;
        float xPosition;
        float yPosition;
        float puntation;

    public:
        Civilizacion();
        Civilizacion(const Civilizacion&);

        void setName(const std::string &n);
        void setXPosition(const float &x);
        void setYPosition(const float &y);
        void setPuntation(const float &p);

        std::string getName();
        float getXPosition();
        float getYPosition();
        float getPuntation();

        friend std::ostream& operator << (std::ostream &out, Civilizacion &c){

         out << std::left;
         out << std::setw(20) << c.name;
         out << std::setw(20) << c.xPosition;
         out << std::setw(20) << c.yPosition;
         out << std::setw(20) << c.puntation;
         out << std::endl;

         return out;

        }
        friend std::istream& operator >> (std::istream &in, Civilizacion &c){
        std::cout << "CIVILIZACION: ";
        fflush(stdin);
        getline(std::cin, c.name);

        std::cout << "POSICION X: ";
        std::cin >> c.xPosition;

        std::cout << "POSICION Y: ";
        std::cin >> c.yPosition;

        std::cout << "PUNTUACION: ";
        std::cin >> c.puntation;
        std::cin.ignore();
        }

        bool operator == (const Civilizacion& c){
            return name == c.name;
        }

        bool operator == (const Civilizacion& c) const{
            return name == c.name;
        }

        bool operator < (const Civilizacion& c){
            return name < c.name;
        }

        bool operator < (const Civilizacion& c) const{
            return name < c.name;
        }
};

#endif // CIVILIZACION_H
