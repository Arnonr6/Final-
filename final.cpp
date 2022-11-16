#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct fecha_f{
    int dia;
    int mes;
    int anio;
};
struct fecha_i{
    int mes;
    int anio;
};
struct provedor_p{
    string nombre;
    string telefono;
    string dni;
    };
struct vinos{

    string codigo;
    string nombre;
    string marca;
    fecha_f fecha; /*Fecha_f es la struct de fecha de fabricacion*/
    fecha_i ingreso;
    string tipo;
    int precio;
    int cantidad;
    provedor_p provedor;
    bool existe;
    int venta = precio + (precio * 0.15);

};
//Validaciones:
string busqueda_de_nombre()
{
    string nombre;
    while (true)
    {
        cin >> nombre;
        if (nombre.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") == /*find_first_not_of Busca el primer caracter que no sea igual a lo que esta en parentesis*/
            std::string::npos)/* std::string::npos cuando termina de cargar la palabra revis letra por letra,
            onda is no esta la a se fija si esta la b y asi*/
        {
            return nombre;
            break;
        }
        cout << "Por favor ingrese un nombre sin numeros ni caracteres especiales: " << endl;
    }
}

string codigo_de_ingreso()
{
    string cod;
    while (true)
    {
        cin >> cod;
        if (cod.find_first_not_of("0123456789") == std::string::npos)
        {
            return cod;
            break;
        }
        cout << "Por favor ingrese un codigo contemplado en el stock: " << endl;
    }
}

int mes_de_ingreso()
{
    int mes;
    while (true)
    {
        cin >> mes;
        if (mes <= 12 && mes >= 0)
        {
            return mes;
            break;
        }
        cout << "Ingrese un mes del 1 al 12" << endl;
    }
}

int anio_de_ingreso()
{
    int anio;
    while (true)
    {
        cin >> anio;
        if (anio < 2022 && anio > 2000)
        {
            return anio;
            break;
        }
        cout << "Ingrese un anio del 2000 al 2022" << endl;
    }
}

int es_positivo(){
    int a;
    while (true)
    {
        cin >>a;
        if (a>=0)
        {
            return a;
            break;
        }
        cout<<" Ingrese un valor positivo porfavor "<<endl;
    }

}

int main()
{

    vinos datos[50];

    datos[0] = {"1", "Malbec", "Alma Mora", {18, 7, 2012}, {12, 2015}, "Tinto", 615, 1000, {"Arnon", "3512812186", "44347974"}, true};
    datos[1] = {"2", "Merlot", "Catena", {1, 5, 2011}, {2, 2014}, "Blanco", 586, 1052, {"Alvaro", "3512483009", "44564720"}, true};
    datos[2] = {"3", "Malbec", "Sophenia", {9, 12, 2018}, {1, 2019}, "Tinto", 917, 1500, {"Fausto", "3516531000", "4123974"}, true};
    datos[3] = {"4", "Syrah", "Don David", {17, 4, 2010}, {12, 2015}, "Rosado", 670, 1321, {"Joaquin", "3512209974", "40258730"}, true};
    datos[4] = {"5", "Cavernet", "Dada", {11, 1, 2009}, {10, 2016}, "Tinto", 744, 1123, {"Agutin", "3512812186", "24585529"}, true};
    datos[5] = {"6", "Merlot", "Toro", {3, 8, 2012}, {9, 2017}, "Tinto", 115, 1853, {"Romeo", "351785200", "39452004"}, true};
    datos[6] = {"7", "Riesling", "Bramare", {1, 2, 2013}, {9, 2017}, "Blanco", 599, 1207, {"Marcos", "351222542", "45298650"}, true};
    datos[7] = {"8", "Chandonnay", "Eggo", {5, 1, 2003}, {5, 2010}, "Rosado", 856, 1053, {"Jeronimo", "35152458", "22452635"}, true};
    datos[8] = {"9", "Sauvignon", "Ruttini", {9, 9, 2009}, {9, 2019}, "Tinto", 423, 1450, {"Lautaro", "351780371", "12223562"}, true};
    datos[9] = {"10", "Sauvignon", "Fond de Cave", {4, 7, 2001}, {9, 2017}, "Blanco", 692, 1853, {"Santiago", "351784170", "3254780"}, true};

    int contador = 9;
    int codigos = contador + 1;

     string eleccion = "";
    // Hacer el ciclo de menu de opciones
    while (eleccion != "8")
    {
    if (eleccion == "1"){

    }
    if (eleccion == "2"){

    }
    if (eleccion == "3"){

    }
    if (eleccion == "4"){

    }
    if (eleccion == "5"){

    }
    if (eleccion == "6"){

    }
    if (eleccion == "7"){

    }

    }
}
