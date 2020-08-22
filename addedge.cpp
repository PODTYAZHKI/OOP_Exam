#include "addedge.h"
#include "ui_addedge.h"

AddEdge::AddEdge(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEdge)
{
    ui->setupUi(this);
//    ui->btn_box->hide();
}

AddEdge::~AddEdge()
{
    delete ui;
}

void AddEdge::on_btn_add_clicked()
{

}

int AddEdge::getNode1() const
{
    return ui->ln_node_1->text().toInt();
}

int AddEdge::getNode2() const
{
    return ui->ln_node_2->text().toInt();
}

int AddEdge::getWeight() const
{
    return ui->ln_weight->text().toInt();
}
