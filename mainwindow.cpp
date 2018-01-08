#include "mainwindow.h"
#include "schaakStuk.h"
<<<<<<< HEAD
#include "positie.h"
#include <QMessageBox>

#include <QtWidgets>
#include <iostream>
=======
#include <QMessageBox>

#include <QtWidgets>
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    scene = new ChessBoard;
    QGraphicsView *view = new QGraphicsView(scene);
    setCentralWidget(view);
    connect(scene,SIGNAL(clicked(int,int)),this,SLOT(clicked(int,int)));
<<<<<<< HEAD
    g.setStartBord();
=======

    //EXAMPLE
    scene->setInitialPositions();

    scene->
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
}

// Update de inhoud van de grafische weergave van het schaakbord (scene)
// en maak het consistent met de game state in variabele g.
void MainWindow::update() {
<<<<<<< HEAD

    for (auto i : g.schaakStukken) {
        int x = (int)i.first[1] - 48;
        int y = positie::charToInt(i.first[0]);

        scene->setItem(--x, y, i.second->piece());
        i.second->setCurrentPositie(positie(--x, y));
=======
    for (auto i : schaakStukken) {
        scene->setItem(positie::charToInt(i.first[0]), (int)i.first[1], i.second->piece());
>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
    }
}

// Deze functie wordt opgeroepen telkens er op het schaakbord
// geklikt wordt. x,y geeft de positie aan waar er geklikt
// werd; r is de 0-based rij, k de 0-based kolom
<<<<<<< HEAD
bool selectd = false;
schaakStuk *selected;
void MainWindow::clicked(int r, int k) {
    std::cout << "GAAAAAAAAAY";
    schaakStuk *s = g.schaakStukken[positie(r,k).str()];

    g.move(s, positie(2,2));

}

/*scene->setTileFocus(r,k,!scene->hasTileFocus(r,k));
   scene->setPieceFocus(r,k,!scene->hasPieceFocus(r,k));

   schaakStuk* s=new pion(wit);
   scene->setItem(r,k,s->piece());
   delete s;

   QMessageBox joehoe;
   joehoe.setText(QString("Je hebt een pion gezet. Wat knap!"));
   joehoe.exec();

   scene->removeAllFocus();

   for (int i=0;i<5;i++) {
       scene->setTileFocus(0, i, !scene->hasTileFocus(r, k));
       scene->setTileFocus(i, 2, !scene->hasTileFocus(r, k));
   }

   joehoe.setText(QString("Kijk, de letter T!"));
   joehoe.exec();

   scene->removeAllFocus();*/
=======
void MainWindow::clicked(int r, int k) {

    scene->setTileFocus(r,k,!scene->hasTileFocus(r,k));
    scene->setPieceFocus(r,k,!scene->hasPieceFocus(r,k));

    schaakStuk* s=new pion(wit);
    scene->setItem(r,k,s->piece());
    delete s;

    QMessageBox joehoe;
    joehoe.setText(QString("Je hebt een pion gezet. Wat knap!"));
    joehoe.exec();

    scene->removeAllFocus();

    for (int i=0;i<5;i++) {
        scene->setTileFocus(0, i, !scene->hasTileFocus(r, k));
        scene->setTileFocus(i, 2, !scene->hasTileFocus(r, k));
    }

    joehoe.setText(QString("Kijk, de letter T!"));
    joehoe.exec();

    scene->removeAllFocus();

}

>>>>>>> 31b431b96f730842f9926097b9e81e48624ed8cc
