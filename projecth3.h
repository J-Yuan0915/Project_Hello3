#ifndef PROJECTH3_H
#define PROJECTH3_H

#include <QMainWindow>

namespace Ui {
class ProjectH3;
}

class ProjectH3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProjectH3(QWidget *parent = 0);
    ~ProjectH3();

private:
    Ui::ProjectH3 *ui;
};

#endif // PROJECTH3_H
