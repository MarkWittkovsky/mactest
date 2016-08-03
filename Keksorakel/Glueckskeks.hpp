//
//  Glueckskeks.hpp
//  Keksorakel
//
//  Created by Daniela on 03.08.16.
//  Copyright © 2016 Daniela. All rights reserved.
//

#ifndef Glueckskeks_hpp
#define Glueckskeks_hpp

#include <stdio.h>
#include "keks.hpp"


class Glueckskeks : public Keks  {
public:
    using Keks::Keks;
    Glueckskeks(string const Botschaft);
    Glueckskeks(Kekstyp Typ, string const Botschaft);
    void aufessen();
    string  zerbroeseln();
    
private:
    string botschaft;
};

#endif /* Glueckskeks_hpp */

