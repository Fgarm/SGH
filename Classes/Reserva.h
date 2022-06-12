#pragma once

#include <iostream>
#include <string>
#include "Cliente.h"
#include "Quarto.h"

using namespace std;

class Reserva
{
    int ID;
    Cliente *cliente;
    Quarto *quarto;
    string DataEntrada;
    string DataSaida;
    int NumeroPessoas;

public:
    int getID();
    void setID(int);

    Cliente *getCliente();
    void setCliente(Cliente *);

    Quarto *getQuarto();
    void setQuarto(Quarto *);

    string getDataEntrada();
    void setDataEntrada(string);

    string getDataSaida();
    void setDataSaida(string);

    int getNumeroPessoas();
    void setNumeroPessoas(int);

    string toStringReserva();
};