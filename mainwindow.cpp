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

void MainWindow::on_BtnSauvegarder_clicked()
{
    ui->DernierCodeSaisi->setText(ui->Code->text());

    if( )
    {
        QMessageBox msgBox;
        msgBox.setText("Saisir du code.");
        msgBox.setInformativeText("Vous devez saisir un code!!");
        msgBox.setStandardButtons(QMessageBox::Ok);
        int ret = msgBox.exec();
        // On vérifie si l'utilisateur a cliqué sur Ok

        if ( ret == QMessageBox::Ok ) {
        // traitement à exécuter
    }

    }
}
