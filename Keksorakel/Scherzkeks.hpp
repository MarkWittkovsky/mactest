//
//  Scherzkeks.hpp
//  Keksorakel
//
//  Created by Daniela on 03.08.16.
//  Copyright © 2016 Daniela. All rights reserved.
//

#ifndef Scherzkeks_hpp
#define Scherzkeks_hpp

#include <stdio.h>
#include "keks.hpp"


class Scherzkeks : public Keks  {
public:
    using Keks::Keks;
    Scherzkeks(string const fuellung);
    Scherzkeks(Kekstyp Typ, string const fuellung);
    void aufessen();
    virtual string  zerbroeseln();
    
private:
    string fuellung;
};

#endif /* Scherzkeks_hpp */

