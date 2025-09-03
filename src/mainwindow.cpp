// better safe than sorry
#pragma once

#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    // create a central widget in THIS
    QWidget* central = new QWidget(this);
    // set it
    this->setCentralWidget(central);

    // create any layout for a widget
    QVBoxLayout* layout = new QVBoxLayout(central);

    // create THE button in THIS
    button = new QPushButton("ОТКРЫТЬ\n2 ФОРМУ", this);
    // set whatever size
    button->setFixedSize(200, 200);

    // this is like putting an empty element into layout
    layout->addStretch();
    // add the widget
    // it will be centered since its size is fixed, an there'll be stretches
    // on top and bottom
    layout->addWidget(button, 0, Qt::AlignCenter);
    // throw another stretchy invisible element
    layout->addStretch();

    // the SAUCE: connect the click sig to our slot
    connect(button, &QPushButton::clicked, this, &MainWindow::openSecondDialog);
}

void MainWindow::openSecondDialog() {
    SecondDialog second_dialog(this);
    second_dialog.exec();
}
