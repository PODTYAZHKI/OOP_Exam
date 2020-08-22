#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graph.h"
#include "addedge.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_add_clicked();

    void on_btn_start_clicked();

    void on_btn_show_clicked();

private:
    Ui::MainWindow *ui;
    Graph *graph;
    std::vector<std::pair<int, int> > gr[10];
};
#endif // MAINWINDOW_H
