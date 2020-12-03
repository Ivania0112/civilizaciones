#include "civilizacion.h"

Civilizacion::Civilizacion()
{

}

string Civilizacion::getNombre()const
{
    return nombre;
}

void Civilizacion::setNombre(const string &value)
{
    nombre= value;
}

int Civilizacion::getUbicacion_x()const
{
    return ubicacion_x;
}

void Civilizacion::setUbicacion_x(int value)
{
    ubicacion_x= value;
}

int Civilizacion::getUbicacion_y()const
{
    return ubicacion_y;
}

void Civilizacion::setUbicacion_y(int value)
{
    ubicacion_y= value;
}

size_t Civilizacion::getPuntuacion()const
{
    return puntuacion;
}

void Civilizacion::setPuntuacion(const size_t &value)
{
    puntuacion= value;
}
