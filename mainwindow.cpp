#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->btn_add->setEnabled(false);
    ui->btn_show->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_add_clicked()
{
    AddEdge *window = new AddEdge;
    if (window->exec())
    {
        int u = window->getNode1();
        int v = window->getNode2();
        int wt = window->getWeight();
        graph->addEdge(gr, u, v, wt);
        int i = graph->getSize();
        if (i > 2)
            ui->btn_show->setEnabled(true);
        std::cout << u << v << wt;

    }
}

void MainWindow::on_btn_start_clicked()
{
    graph = new Graph;
    ui->btn_add->setEnabled(true);
//    ui->btn_show->setEnabled(true);
}

void MainWindow::on_btn_show_clicked()
{
    graph->printGraph(gr, gr->size());
}
