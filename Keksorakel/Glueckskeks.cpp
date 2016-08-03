//
//  Glueckskeks.cpp
//  Keksorakel
//
//  Created by Daniela on 03.08.16.
//  Copyright © 2016 Daniela. All rights reserved.
//

#include "Glueckskeks.hpp"
#include "keks.hpp"

Glueckskeks::Glueckskeks(string const Botschaft) :
Keks{}, botschaft {Botschaft} {
};

Glueckskeks::Glueckskeks(Kekstyp Typ, string const Botschaft) :
Keks{Typ}, botschaft {Botschaft} {
};

void Glueckskeks::aufessen() {
    
};

string Glueckskeks::zerbroeseln() {
    return botschaft;
};