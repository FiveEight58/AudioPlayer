#include "playlist.h"
#include "ui_mainwindow.h"
#include "ui_playlist.h"
#include "mainwindow.h"
#include "QFileDialog"
#include "QTableWidget"
#include "QString"
#include "QFile"

Playlist::Playlist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Playlist)
{
    ui->setupUi(this);
}

Playlist::~Playlist()
{
    delete ui;
}

void Playlist::addfiles()
{
    QFileDialog openfile;
    QStringList filepath = openfile.getOpenFileNames();   //file path


        for(int i = 0; i < filepath.size(); i++)
        {

            QFileInfo fi(filepath[i]);
            QString name = fi.fileName();

            if(!name.isNull())
            {
               ui->tableWidget->insertRow(0); //row inserted
               ui->tableWidget->setItem(0, 1, new QTableWidgetItem(name));  //add item to QTableWidget
            }

            //store filepath

        }
}
