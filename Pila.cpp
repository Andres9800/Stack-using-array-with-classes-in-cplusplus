//
// Created by wtla2 on 12/21/2021.
//

#include "Pila.h"

template<class E>
Pila<E>::Pila(int tam): S(new E[tam]), topValor(-1), tam(tam){

}
template<class E>
int Pila<E>::size() const {
    return topValor+1;
}

template<class E>
bool Pila<E>::empty() const {
    return (topValor<0);
}
template<class E>
const E& Pila<E>::top() const throw(StackEmpty) {
    return S[topValor];
}
template<class E>
void Pila<E>::push(const E& e)  throw(StackFull) {
    if(size()==tam){
        throw StackFull("Push en un stack lleno!");
    }
    S[++topValor]=e;
}

template<class E>
void Pila<E>::pop() throw(StackEmpty) {
    if(empty()){
        throw StackEmpty("Push en una pila vacia!");

    }
    --topValor;
}
