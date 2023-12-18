#ifndef MAFORME_H
#define MAFORME_H

#include <QDialog>
#include <QWidget>

namespace Ui {
class maforme;
}

class maforme : public QWidget
{
    Q_OBJECT

public:
    explicit maforme(QWidget *parent = nullptr);
    ~maforme();

private slots:
    void on_ChoixNon_clicked();

    void on_ChoixOui_clicked();

private:
    Ui::maforme *ui;
};

#endif // MAFORME_H
