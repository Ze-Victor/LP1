#include <iostream>

using namespace std;

template <class T> 
class Fila{
    private:
    int tam;
    int first;
    int last;
    T* elements;

    public:
    Fila(int s){
        this->tam = s;
        this->first = 0;
        this->last = 0;
        this->elements = new T[tam];
    }

    void push(T element){
        if(last == tam){
            cout << "Fila cheia" << endl;
        }else{
            this->elements[last] = element;
            last++;
        }
    }
    void pop(){
        if(last == first){
            cout << "Pilha vazia" << endl;
        }else{
            first++;
        }
    }
    bool empty(){
        if(last == first){
            return true;
        }else{
            return false;
        }
    }
    int size(){
        return last - first;
    }
    T back(){
        return this->elements[--last];
    }
    T front(){
        return this->elements[first];
    }

};
