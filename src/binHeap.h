#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>

// Predložak klase koji implementira maximalnu hrpu. 
template <typename T>
class MaxHeap{
public:
    using size_type = typename std::vector<T>::size_type;
	// Konstruktor
    MaxHeap() = default;
    // Parametrizirani konstruktor koji preuzima elemente iz raspona [begin, end).
    template <typename RAIT>
    MaxHeap(RAIT begin, RAIT end);
	// Gurni novi element na hrpu.
    void push(T);
	// Ukloni vodeći (maksimalni) element sa hrpe.
    void pop();
	// Vrati vodeći element hrpe.
    T top() const;
    // Je li hrpa prazna?
    bool empty() const;
	// Broj elemenata u hrpi.
    size_type size() const;
    // Ispiši sortirane vijednosti u vektor vec. 
	// MaxHeap ostaje prazan nakon sortiranja.
    void sort(std::vector<T> & vec);
protected:
  std::vector<T> mData;
  // Eventualne dodatne metode stavljati u ovu sekciju.
};


template <typename T>
template <typename RAIT>
MaxHeap<T>::MaxHeap(RAIT begin, RAIT end){
   // Vaš kod 
}

template <typename T>
void MaxHeap<T>::push(T elem){
  // Vaš kod    
}

template <typename T>
void MaxHeap<T>::pop(){
  // Vaš kod
}

template <typename T>
T MaxHeap<T>::top() const{
  // Vaš kod
}

template <typename T>
bool MaxHeap<T>::empty() const {
  // Vaš kod
}

template <typename T>
typename MaxHeap<T>::size_type MaxHeap<T>::size() const {
  // Vaš kod
}

template <typename T>
void MaxHeap<T>::sort(std::vector<T> & vec){
  // Vaš kod
}


#endif
