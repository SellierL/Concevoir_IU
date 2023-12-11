#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_BoutonArret_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Arrêt de l'application");
    msgBox.setInformativeText("Voulez-vous vraiment arrêter l'application ?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    int ret = msgBox.exec();
    // On vérifie si l'utilisateur a cliqué sur Yes

    if ( ret == QMessageBox::Yes )
    {
    // traitement à exécuter pour arrêter l'application et fermer toutes les fenetres
    }
    else
    {
       //Fermer juste la fenetre msgBox
    }
}

