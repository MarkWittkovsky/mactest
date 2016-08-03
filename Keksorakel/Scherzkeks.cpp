//
//  Scherzkeks.cpp
//  Keksorakel
//
//  Created by Daniela on 03.08.16.
//  Copyright © 2016 Daniela. All rights reserved.
//

#include "Scherzkeks.hpp"
#include "keks.hpp"

Scherzkeks::Scherzkeks(string const fuellung) :
Keks{}, fuellung {fuellung} {
};

Scherzkeks::Scherzkeks(Kekstyp Typ, string const fuellung) :
Keks{Typ}, fuellung {fuellung} {
};

void Scherzkeks::aufessen() {
    
};

string Scherzkeks::zerbroeseln() {
    return fuellung;
};