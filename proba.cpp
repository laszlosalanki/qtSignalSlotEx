#include "proba.h"
#include "ui_proba.h"

Proba::Proba(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Proba)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),
            ui->progressBar, SLOT(setValue(int)));
}

Proba::~Proba()
{
    delete ui;
}
