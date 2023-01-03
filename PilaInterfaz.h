//
// Created by wtla2 on 12/21/2021.
//

#ifndef PILA_INTERFAZ_PILAINTERFAZ_H
#define PILA_INTERFAZ_PILAINTERFAZ_H

#include "RuntimeException.h"

template <class E>
class PilaInterfaz {
public:
    virtual int size() const =0; //numero de items en la pila
    virtual bool empty() const =0; // esta vacia la pila?
    virtual const E& top() const throw(StackEmpty) =0; //elemento al top
    virtual void push(const E& e) = 0;// mete el elemento a la pila
    virtual void pop() throw(StackEmpty) = 0;// remueve el elemento top
};


#endif //PILA_INTERFAZ_PILAINTERFAZ_H
