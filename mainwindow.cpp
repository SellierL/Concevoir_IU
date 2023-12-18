#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "maforme.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Instancie ma propre fenêtre de message personnalisée
    this->FormMessage = new maforme() ;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete FormMessage;
}

void MainWindow::testForm()
{
    QPushButton *clickedButton = qobject_cast<QPushButton *>(sender());
    clickedButton->setText("affichage form widget");
    bool vis = this->FormMessage->isVisible();
    this->FormMessage->setVisible(true);
    vis = this->FormMessage->isVisible();
    this->FormMessage->show();
}


void MainWindow::on_BoutonArret_clicked()
{
    this->testForm();
}

