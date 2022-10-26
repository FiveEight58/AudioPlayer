#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void btn_pressed();


private slots:
    void on_actionAdd_Files_triggered();

    void on_actionAdd_Folder_triggered();

    void on_actionExit_triggered();

    void on_actionNew_Playlist_triggered();

    void on_tabWidget_tabBarClicked(int index);

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
