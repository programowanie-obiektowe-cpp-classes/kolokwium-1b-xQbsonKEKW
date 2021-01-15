#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument

template <class T>
class ArystaPlusInstrument {
private:    
    Artysta a;
    T i;
public:
    ArystaPlusInstrument(const Artysta& ar, const T& tt) : a{ar} , i{tt} {}
    usigned koncert() {
        return i.liczbaUczestnikow(a);
    }
};