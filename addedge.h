#ifndef ADDEDGE_H
#define ADDEDGE_H

#include <QDialog>
#include "graph.h"

namespace Ui {
class AddEdge;
}

class AddEdge : public QDialog
{
    Q_OBJECT

public:
    explicit AddEdge(QWidget *parent = nullptr);
    ~AddEdge();
    int getNode1() const;
    int getNode2() const;
    int getWeight() const;

private slots:
    void on_btn_add_clicked();

private:
    Ui::AddEdge *ui;
    bool flag = false;
};

#endif // ADDEDGE_H
