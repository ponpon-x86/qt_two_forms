#include "second_dialog.h"

// construct QDialog first
SecondDialog::SecondDialog(QWidget* parent) : QDialog(parent) {
    // same stuff as before, create any layout
    QVBoxLayout *layout = new QVBoxLayout(this);

    // create the private button
    button = new QPushButton("СОЗДАТЬ\nФАЙЛ\nИ\nВЫЙТИ", this);
    button->setFixedSize(200, 200);

    // same thing
    layout->addStretch();
    layout->addWidget(button, 0, Qt::AlignCenter);
    layout->addStretch();

    // connect
    connect(button, &QPushButton::clicked, this, &SecondDialog::createFileAndExit);
}

void SecondDialog::createFileAndExit() {
    // create file
    QFile file("ultraoutput.txt");
    // open it
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        // write smth
        out << "Миру мир!\n";
        // close
        file.close();
    }
    // nuke the app
    QApplication::quit();
}
