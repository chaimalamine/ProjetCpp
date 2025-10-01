#include "gestion_employe.h"
#include "ui_gestion_employe.h"

gestion_employe::gestion_employe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gestion_employe)
{
    ui->setupUi(this);
}

gestion_employe::~gestion_employe()
{
    delete ui;
}
