//
//  keks.cpp
//  Keksorakel
//
//  Created by Daniela on 03.08.16.
//  Copyright © 2016 Daniela. All rights reserved.
//

#include "keks.hpp"

Keks::Keks() :
typ {Kekstyp::ChinaRestaurant} {
};

Keks::Keks(const Kekstyp Typ) :
typ {Typ} {
};

