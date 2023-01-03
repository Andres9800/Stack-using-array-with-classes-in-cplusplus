//
// Created by wtla2 on 12/21/2021.
//

#ifndef PILA_INTERFAZ_PILA_H
#define PILA_INTERFAZ_PILA_H

#include "PilaInterfaz.h"
#define DEF_CAPACITY 10

template<class E>
class Pila : public PilaInterfaz<E>{
private:
    E* S;// arreglo de los elementos del stack
    int tam; // tamano del stack
    int topValor; // indice posicion del valor top
public:
    Pila(int tam = DEF_CAPACITY);//constructor con tam maximo
    int size() const; // numero de items en el stack
    bool empty() const;// esta vacio el stack?
    const E& top() const throw(StackEmpty); // obtiene el elemento top
    void push(const E& e) throw(StackFull); // ingresa el elemento al stack
    void pop() throw(StackEmpty); // extrae el elemento top
};


#endif //PILA_INTERFAZ_PILA_H
