
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// representatives of the proletariat
#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

#include "second_dialog.h"

// this was out first class and it was goated with the SAUCE
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow() = default;
public slots:
    // secret sauce
    void openSecondDialog();
private:
    // THE button
    QPushButton* button;
};

#endif // MAINWINDOW_H
