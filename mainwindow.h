#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct Book {
    QString title;
    int price;
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void sortByTitle();
    void sortByPrice();
    void sortByBoth();

private:
    Ui::MainWindow *ui;
    QVector<Book> books;
    void displayBooks(const QVector<Book>&);
};

#endif // MAINWINDOW_H
