//
//  main.cpp
//  Keksorakel
//
//  Created by Daniela on 03.08.16.
//  Copyright © 2016 Daniela. All rights reserved.
//

#include <iostream>
#include "keks.hpp"
#include "Glueckskeks.hpp"
#include "Scherzkeks.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
//    vector<Keks> kekse;
//    Glueckskeks gk1 = Glueckskeks("Viel Glück");
//    kekse.push_back(gk1);
//    gk1 = Glueckskeks("Sie werden noch mehr Glück haben");
//    kekse.push_back(gk1);
//    Scherzkeks sk1 = Scherzkeks("Senf");
//    kekse.push_back(sk1);
//    sk1 = Scherzkeks("Meerrettich");
//    kekse.push_back(sk1);
//    for (auto x : kekse) {
//        cout << static_cast<>x.zerbroeseln();
//    }
//
    
        vector<Keks*> dieKekse;
        dieKekse.push_back( new Glueckskeks("Viel Glück"));
    dieKekse.push_back( new Glueckskeks("Sie werden noch mehr Glück haben"));
    dieKekse.push_back( new Scherzkeks("Senf"));
    dieKekse.push_back( new Scherzkeks("Meerrettich"));

        for(auto keksPtr : dieKekse) {
            cout << keksPtr->zerbroeseln() << '\n'; }
    
    return 0;
}
