#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QFileDialog"
#include "QTableWidget"
#include "QString"
#include "QFile"
#include "playlist.h"

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



void MainWindow::on_actionAdd_Files_triggered()
{


    //QObject::connect(actionAdd_Files, SIGNAL(btn_pressed()),  form, &Playlist::addfiles);
    //ui->tabWidget->insertTab(ui->tabWidget->count(),new Playlist(), QIcon(QString("")), "New Tab");

}



void MainWindow::on_actionAdd_Folder_triggered()
{
    QFileDialog openfolder;
    openfolder.getExistingDirectory(this,tr("Open Folder"),"/home/fiveeight");

}


void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}




void MainWindow::on_actionNew_Playlist_triggered()
{
    ui->tabWidget->insertTab(ui->tabWidget->count(),new Playlist(), QIcon(QString("")), "New Tab");
}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{

}


void MainWindow::on_pushButton_7_clicked()
{
    ui->tabWidget->insertTab(ui->tabWidget->count(),new Playlist(), QIcon(QString("")), "New Playlist");
}


void MainWindow::on_pushButton_8_clicked()
{

}

