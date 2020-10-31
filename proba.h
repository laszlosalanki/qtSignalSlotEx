#ifndef PROBA_H
#define PROBA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Proba; }
QT_END_NAMESPACE

class Proba : public QMainWindow
{
    Q_OBJECT

public:
    Proba(QWidget *parent = nullptr);
    ~Proba();

private:
    Ui::Proba *ui;
};
#endif // PROBA_H
