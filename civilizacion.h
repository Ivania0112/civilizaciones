#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include <iostream>
#include <iomanip>
using namespace std;


class Civilizacion
{
private:
    string nombre;
    int ubicacion_x;
    int ubicacion_y;
    size_t puntuacion;
public:
    Civilizacion();
    string getNombre() const;
    void setNombre(const string &value);

    int getUbicacion_x() const;
    void setUbicacion_x(int value);

    int getUbicacion_y() const;
    void setUbicacion_y(int value);

    size_t getPuntuacion() const;
    void setPuntuacion(const size_t &value);

    friend ostream & operator <<(ostream &out, const Civilizacion &c)
    {
        cout<< left;
        out<< setw(15)<< c.nombre;
        out<< setw(20)<< c.ubicacion_x;
        out<< setw(20)<< c.ubicacion_y;
        out<< setw(15)<< c.puntuacion;

    return out;
    }

    friend istream& operator >>(istream &in, Civilizacion &c)
    {
        string s;
        int valor;
        size_t valor1;

        cout<< "Nombre: ";
        getline(cin,s);
        c.setNombre(s);

        cout<< "Ubicacion en X: ";
        cin>> valor;
        c.setUbicacion_x(valor);

        cout<< "Ubicacion en Y: ";
        cin>> valor;
        c.setUbicacion_y(valor);

        cout<< "Puntuacion: ";
        cin>> valor1; cin.ignore();
        c.setPuntuacion(valor1);

        return in;
    }

    bool operator< (const Civilizacion &c)const{
        return nombre< c.nombre;
    }

    bool operator== (const Civilizacion &c) const{
        return nombre== c.nombre;
    }
};

#endif // CIVILIZACION_H