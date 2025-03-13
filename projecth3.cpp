#include "projecth3.h"
#include "ui_projecth3.h"
#include <QDebug>

ProjectH3::ProjectH3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProjectH3)
{
    ui->setupUi(this);
}

ProjectH3::~ProjectH3()
{
    delete ui;
}

void ProjectH3::on_pushButton_clicked()
{
    qDebug() << "Hello World!Hey Mr.Handsome/Gentleman";
}
