#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidgetItem>
#include <algorithm>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setStyleSheet(
        "QWidget { background-color: #1E1E1E; color: #F0F0F0; font-family: 'Segoe UI'; }"
        "QPushButton {"
        " background-color: #2E86C1; color: white; font-weight: bold; border-radius: 10px; padding: 8px;"
        "}"
        "QPushButton:hover { background-color: #1F618D; }"
        "QTableWidget {"
        " background-color: #2C3E50; gridline-color: #566573; font-size: 14px;"
        " selection-background-color: #5DADE2; selection-color: #FFFFFF;"
        " border: 1px solid #566573;"
        "}"
        "QHeaderView::section { background-color: #34495E; font-weight: bold; color: white; border: 1px solid #566573; }"
    );

    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    books = {
        {"The Monk who Sold his Ferrari", 225},
        {"Paradise Lost", 199},
        {"The Best of Ruskin Bond", 499},
        {"The Journey", 195},
        {"Mein Kamph", 250},
        {"The Journey", 170}
    };

    displayBooks(books);

    connect(ui->sortByTitleButton, &QPushButton::clicked, this, &MainWindow::sortByTitle);
    connect(ui->sortByPriceButton, &QPushButton::clicked, this, &MainWindow::sortByPrice);
    connect(ui->sortByBothButton, &QPushButton::clicked, this, &MainWindow::sortByBoth);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::displayBooks(const QVector<Book> &bookList) {
    ui->tableWidget->setRowCount(bookList.size());
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels({"Title", "Price"});

    for (int i = 0; i < bookList.size(); ++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(bookList[i].title));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(bookList[i].price)));
    }
}

void MainWindow::sortByTitle() {
    std::sort(books.begin(), books.end(), [](const Book &a, const Book &b) {
        return a.title < b.title;
    });
    displayBooks(books);
}

void MainWindow::sortByPrice() {
    std::sort(books.begin(), books.end(), [](const Book &a, const Book &b) {
        return a.price < b.price;
    });
    displayBooks(books);
}

void MainWindow::sortByBoth() {
    std::sort(books.begin(), books.end(), [](const Book &a, const Book &b) {
        if (a.title == b.title)
            return a.price < b.price;
        return a.title < b.title;
    });
    displayBooks(books);
}
