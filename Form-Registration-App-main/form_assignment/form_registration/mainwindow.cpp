#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/mohit/OneDrive/Desktop/qt/assignment2/assignment_placement/form_assign.jpg");
    int w = ui->label_img->width();
    int h = ui->label_img->height();
    ui->label_img->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


    ui->label_ff->setText("<font color='#fff'>Placement Registration</font>");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"SUBMITTED","Form Submitted succesfully");

}
