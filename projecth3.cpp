#include "projecth3.h"
#include "ui_projecth3.h"

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
