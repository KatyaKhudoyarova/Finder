#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "person.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Save_clicked(){
    int newGroupSize = ui->GroupSizeEdit->text().toInt();
    this ->person.SetGroupSize(newGroupSize);
    this->person.setIndex(newIndex);
    this ->person.resize();
    ui ->GroupSizeEdit->setEnabled(false);
    ui ->Save->setEnabled(false);

    int groupSize = this->person.GetGroupSize();

    ui->label_7->setText(QString::number(Index) + "/"+ QString::number(groupSize));

    ui->tabWidget->setEnabled(true);
    }

