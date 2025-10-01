#ifndef GESTION_EMPLOYE_H
#define GESTION_EMPLOYE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class gestion_employe;
}
QT_END_NAMESPACE

class gestion_employe : public QMainWindow
{
    Q_OBJECT

public:
    gestion_employe(QWidget *parent = nullptr);
    ~gestion_employe();

private:
    Ui::gestion_employe *ui;
};
#endif // GESTION_EMPLOYE_H
