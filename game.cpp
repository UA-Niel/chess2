//  Student:
//  Rolnummer:
//  Opmerkingen: (bvb aanpassingen van de opgave)
//

#include "game.h"
#include "positie.h"
#include "chessboard.h"
#include "mainwindow.h"
<<<<<<< HEAD
#include <QGraphicsScene>
#include "schaakStuk.h"
#include <algorithm>
=======

map<string, schaakStuk*> schaakStukken;
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc

game::game() {}

game::~game() {}

// Zet het bord klaar; voeg de stukken op de jusite plaats toe
void game::setStartBord() {
<<<<<<< HEAD
    //Zwart
    schaakStuk *zwartPion1 = new pion(zwart);
    schaakStuk *zwartPion2 = new pion(zwart);
    schaakStuk *zwartPion3 = new pion(zwart);
    schaakStuk *zwartPion4 = new pion(zwart);
    schaakStuk *zwartPion5 = new pion(zwart);
    schaakStuk *zwartPion6 = new pion(zwart);
    schaakStuk *zwartPion7 = new pion(zwart);
    schaakStuk *zwartPion8 = new pion(zwart);

    schaakStuk* zwartToren1 = new toren(zwart);
    schaakStuk* zwartToren2 = new toren(zwart);

    schaakStuk* zwartPaard1 = new paard(zwart);
    schaakStuk* zwartPaard2 = new paard(zwart);

    schaakStuk* zwartLoper1 = new loper(zwart);
    schaakStuk* zwartLoper2 = new loper(zwart);

    schaakStuk* zwartKoning = new koning(zwart);
    schaakStuk* zwartKoningin = new koningin(zwart);

    schaakStukken["a2"] = zwartPion1;
    schaakStukken["b2"] = zwartPion2;
    schaakStukken["c2"] = zwartPion3;
    schaakStukken["d2"] = zwartPion4;
    schaakStukken["e2"] = zwartPion5;
    schaakStukken["f2"] = zwartPion6;
    schaakStukken["g2"] = zwartPion7;
    schaakStukken["h2"] = zwartPion8;
    schaakStukken["a1"] = zwartToren1;
    schaakStukken["b1"] = zwartPaard1;
    schaakStukken["c1"] = zwartLoper1;
    schaakStukken["d1"] = zwartKoning;
    schaakStukken["e1"] = zwartKoningin;
    schaakStukken["f1"] = zwartLoper2;
    schaakStukken["g1"] = zwartPaard2;
    schaakStukken["h1"] = zwartToren2;
    
    //Wit
    schaakStuk *witPion1 = new pion(wit);
    schaakStuk *witPion2 = new pion(wit);
    schaakStuk *witPion3 = new pion(wit);
    schaakStuk *witPion4 = new pion(wit);
    schaakStuk *witPion5 = new pion(wit);
    schaakStuk *witPion6 = new pion(wit);
    schaakStuk *witPion7 = new pion(wit);
    schaakStuk *witPion8 = new pion(wit);

    schaakStuk* witToren1 = new toren(wit);
    schaakStuk* witToren2 = new toren(wit);

    schaakStuk* witPaard1 = new paard(wit);
    schaakStuk* witPaard2 = new paard(wit);

    schaakStuk* witLoper1 = new loper(wit);
    schaakStuk* witLoper2 = new loper(wit);

    schaakStuk* witKoning = new koning(wit);
    schaakStuk* witKoningin = new koningin(wit);

    schaakStukken["a7"] = witPion1;
    schaakStukken["b7"] = witPion2;
    schaakStukken["c7"] = witPion3;
    schaakStukken["d7"] = witPion4;
    schaakStukken["e7"] = witPion5;
    schaakStukken["f7"] = witPion6;
    schaakStukken["g7"] = witPion7;
    schaakStukken["h7"] = witPion8;
    schaakStukken["a8"] = witToren1;
    schaakStukken["b8"] = witPaard1;
    schaakStukken["c8"] = witLoper1;
    schaakStukken["d8"] = witKoning;
    schaakStukken["e8"] = witKoningin;
    schaakStukken["f8"] = witLoper2;
    schaakStukken["g8"] = witPaard2;
    schaakStukken["h8"] = witToren2;

=======
   scene->setInitialPositions();
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
}

// Verplaats stuk s naar positie p
// Als deze move niet mogelijk is, wordt false teruggegeven
// en verandert er niets aan het schaakbord.
// Anders wordt de move uitgevoerd en wordt true teruggegeven
bool game::move(schaakStuk* s, positie p) {
<<<<<<< HEAD
    //string currentPosition = mapChessToPosition(s).str();
    positie newPosition = p;

    //Get geldige_zetten
    std::cout << "GAAAAAAAAAY";
    vector<positie> v = s->geldige_zetten(*this);

    //Move
    /*if (find(v.begin(), v.end(), p) != v.end()) {
        schaakStukken.erase(currentPosition);
        schaakStukken[newPosition.str()] = s;
    } else return false;
     */


   /* for (int i = 0; i < v.size(); i++) {
        if (v[i].str() == p.str()) {
            schaakStukken.erase(currentPosition);
            schaakStukken[newPosition.str()] = s;

            return true;
        }
    }*/
    return false;
=======
    string currentPosition = mapChessToPosition(s).str();
    positie newPosition = p;

    schaakStukken.erase(currentPosition);
    schaakStukken[newPosition.str()] = s;

    return true;
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
}

// Geeft true als kleur schaak staat
bool game::schaak(zw kleur) {
    return false;
}

// Geeft true als kleur schaakmat staat
bool game::schaakmat(zw kleur) {
    return false;
}

// Geeft true als kleur pat staat
// (pat = geen geldige zet mogelijk, maar kleur staat niet schaak;
// dit resulteert in een gelijkspel)
bool game::pat(zw kleur) {
    return false;
}


//Inverses map search
positie game::mapChessToPosition(schaakStuk* s) {
    for (auto i : schaakStukken)
        if (i.second == s)
            return i.first;
}