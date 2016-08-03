//
//  keks.hpp
//  Keksorakel
//
//  Created by Daniela on 03.08.16.
//  Copyright © 2016 Daniela. All rights reserved.
//

#ifndef keks_hpp
#define keks_hpp

#include <iostream>
#include <vector>

using namespace std;

enum Kekstyp {Butter, Schoko, Creme, Waffel, Roellchen, ChinaRestaurant};

class Keks {
public:
    Keks();
    Keks(const Kekstyp typ);
    virtual string  zerbroeseln();
private:
    Kekstyp typ;
};



#endif /* keks_hpp */
