#include "videogame.h"
#include<algorithm>


VideoGame::VideoGame(){}

void VideoGame::setUserName(const std::string &u){
    userName = u;
}

string VideoGame::getUserName(){
    return userName;
}

void VideoGame::addCivi(){
    Civilizacion civ;
    cin >> civ;

    civi.push_back(civ);
}

void VideoGame::showCivi(){
    cout << std::left;
    cout << std::setw(20) << "CIVILIZACION";
    cout << std::setw(20) << "POSICION X";
    cout << std::setw(20) << "POSICION Y";
    cout << std::setw(20) << "PUNTUACION";
    cout << std::endl;

    for(size_t i = 0; i < civi.size(); i++){
        Civilizacion &civ = civi[i];
        cout << civ;
    }

}

void VideoGame::insertCivi(const size_t pos, const Civilizacion &c){
    civi.insert(civi.begin()+pos, c);
}

void VideoGame::inicializar(const Civilizacion &c, size_t n){
    civi = vector<Civilizacion>(n, c);
}

void VideoGame::getFirst(){
    cout << std::left;
    cout << std::setw(20) << "CIVILIZACION";
    cout << std::setw(20) << "POSICION X";
    cout << std::setw(20) << "POSICION Y";
    cout << std::setw(20) << "PUNTUACION";
    cout << std::endl;
    cout << civi.front();
}

void VideoGame::getLast(){
    cout << std::left;
    cout << std::setw(20) << "CIVILIZACION";
    cout << std::setw(20) << "POSICION X";
    cout << std::setw(20) << "POSICION Y";
    cout << std::setw(20) << "PUNTUACION";
    cout << std::endl;
    cout << civi.back();
}

size_t VideoGame::tam(){
    return civi.size();
}

Civilizacion* VideoGame::buscar(const Civilizacion &c){
    auto it = find(civi.begin(), civi.end(), c);

    if (it == civi.end()){
        return nullptr;
    }
    else{
        return &(*it);
    }
}

void VideoGame::eliminar(Civilizacion *pos){
    Civilizacion c = *pos;

    for(size_t i =0; i < civi.size(); i++){
        Civilizacion &civ = civi[i];
        if (civ == c){
            civi.erase(civi.begin()+i);
        }

    }

}

void VideoGame::modificar(Civilizacion *civv, size_t option){
    Civilizacion c = *civv;
    string myStr;
    float data;
    if (option == 1){
        for(size_t i =0; i < civi.size(); i++){
            Civilizacion &civ = civi[i];
            if (civ == c){
                cout << "INGRESE NUEVO NOMBRE: ";
                fflush(stdin);
                getline(cin, myStr);
                c.setName(myStr);
                civi.erase(civi.begin()+i);
                civi.insert(civi.begin()+i, c);

            }
        }
    }
    else if (option == 2){
        for(size_t i =0; i < civi.size(); i++){
            Civilizacion &civ = civi[i];
            if (civ == c){
                cout << "INGRESE NUEVA POSICION EN X: ";
                cin >> data;
                cin.ignore();
                c.setXPosition(data);
                civi.erase(civi.begin()+i);
                civi.insert(civi.begin()+i, c);

            }
        }

    }
    else if (option == 3){
        for(size_t i =0; i < civi.size(); i++){
            Civilizacion &civ = civi[i];
            if (civ == c){
                cout << "INGRESE NUEVA POSICION EN Y: ";
                cin >> data;
                cin.ignore();
                c.setYPosition(data);
                civi.erase(civi.begin()+i);
                civi.insert(civi.begin()+i, c);

            }
        }
    }
    else if (option == 4){
            for(size_t i =0; i < civi.size(); i++){
            Civilizacion &civ = civi[i];
            if (civ == c){
                cout << "INGRESE NUEVA POSICION EN X: ";
                cin >> data;
                cin.ignore();
                c.setPuntation(data);
                civi.erase(civi.begin()+i);
                civi.insert(civi.begin()+i, c);

            }
        }

    }
}

void VideoGame::ordenarNombre(){
    sort(civi.begin(), civi.end(),[]( Civilizacion c1,  Civilizacion c2){return c1.getName() > c2.getName();});
}

void VideoGame::ordenarX(){
    sort(civi.begin(), civi.end(),[]( Civilizacion c1,  Civilizacion c2){return c1.getXPosition() > c2.getXPosition();});
}

void VideoGame::ordenarY(){
    sort(civi.begin(), civi.end(),[]( Civilizacion c1,  Civilizacion c2){return c1.getYPosition() > c2.getYPosition();});
}

void VideoGame::ordenarPuntuacion(){
    sort(civi.begin(), civi.end(),[]( Civilizacion c1,  Civilizacion c2){return c1.getPuntation() > c2.getPuntation();});
}


