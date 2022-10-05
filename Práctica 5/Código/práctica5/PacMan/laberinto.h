#ifndef LABERINTO_H
#define LABERINTO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Laberinto; }
QT_END_NAMESPACE

class Laberinto : public QMainWindow
{
    Q_OBJECT

public:
    Laberinto(QWidget *parent = nullptr);
    ~Laberinto();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Laberinto *ui;
};
#endif // LABERINTO_H
