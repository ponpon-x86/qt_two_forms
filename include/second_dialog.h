#pragma once

#include <QDialog>
#include <QPushButton>

#include <QVBoxLayout>
#include <QFile>
#include <QTextStream>
#include <QApplication>

class SecondDialog : public QDialog
{
    Q_OBJECT
public:
    SecondDialog(QWidget* parent = nullptr);
    ~SecondDialog() = default;
private slots:
    // self explanatory
    void createFileAndExit();
private:
    // ANOTHER one.
    QPushButton* button;
};
