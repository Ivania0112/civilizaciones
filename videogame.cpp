#include "videogame.h"

VideoGame::VideoGame()
{

}

void VideoGame::agregar_civilizacion(const Civilizacion &civ)
{
    civilizaciones.push_back(civ);
}

void VideoGame::mostrar()
{
    cout<< left;
    cout<< setw(15) << "Nombre"
        << setw(20) << "Ubicacion x"
        << setw(20) << "Ubicacion y"
        << setw(15) << "Puntuacion"<< endl;
    for (size_t i=0; i< civilizaciones.size(); i++){
        Civilizacion &c = civilizaciones[i];
        cout<< c<< endl;
    }
}

void VideoGame::insertar_civilizacion(const Civilizacion &civ, size_t pos)
{
    civilizaciones.insert(civilizaciones.begin()+pos,civ);
}

void VideoGame::inicializar_civilizaciones(const Civilizacion &civ, size_t n)
{
    civilizaciones= vector<Civilizacion>(n,civ);
}

void VideoGame::primera_civilizacion()
{
    cout<< left;
    cout<< setw(15) << "Nombre"
        << setw(20) << "Ubicacion x"
        << setw(20) << "Ubicacion y"
        << setw(15) << "Puntuacion"<< endl;
        cout<<civilizaciones.front()<<endl;
}

void VideoGame::ultima_civilizacion()
{
    cout<< left;
    cout<< setw(15) << "Nombre"
        << setw(20) << "Ubicacion x"
        << setw(20) << "Ubicacion y"
        << setw(15) << "Puntuacion"<< endl;
        cout<<civilizaciones.back()<<endl;
}

void VideoGame::ordenar_nombre()
{
    ::sort(civilizaciones.begin(),civilizaciones.end());
}

void VideoGame::ordenar_ux()
{
    ::sort(civilizaciones.begin(),civilizaciones.end(),[](const Civilizacion &a, const Civilizacion &b){return a.getUbicacion_x()< b.getUbicacion_x();});
}

void VideoGame::ordenar_uy()
{
    ::sort(civilizaciones.begin(),civilizaciones.end(),[](const Civilizacion &a, const Civilizacion &b){return a.getUbicacion_y()< b.getUbicacion_y();});
}

void VideoGame::ordenar_punt()
{
    ::sort(civilizaciones.begin(),civilizaciones.end(),[](const Civilizacion &a, const Civilizacion &b){return a.getPuntuacion()< b.getPuntuacion();});
}

void VideoGame::eliminar(const Civilizacion &c)
{
    size_t pos;
    for(size_t i=0; i<civilizaciones.size(); i++){
        if(c.getNombre()== civilizaciones[i].getNombre()){
            pos= i;}
    }
    civilizaciones.erase(civilizaciones.begin()+pos);
}

Civilizacion *VideoGame:: buscar(const Civilizacion &civ)
{
    auto it = find(civilizaciones.begin(), civilizaciones.end(), civ);
    if(it == civilizaciones.end()){
        return nullptr;
    }
    else{
        return &(*it);
    }
}

string VideoGame::getNombre_usuario() const
{
    return nombre_usuario;
}

void VideoGame::setNombre_usuario(const string &value)
{
    nombre_usuario= value;
}


