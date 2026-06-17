#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButton_clicked()
{
  QMessageBox::information(this,"informtaion","Vennapureddy anil Kumar ?");
}


void MainWindow::on_pushButton_2_clicked()
{
  static QMessageBox::StandardButton reply;
  reply= QMessageBox::question(this,"Question","Is this vennapureddy Anil Kumar",QMessageBox::Yes|QMessageBox ::No | QMessageBox::Discard);
  if(reply == QMessageBox::Yes){
    ui->label->setText("Thanks for your Message");
  }else if(reply == QMessageBox::No){
    ui->label->setText("Thanks for your no");
  }else{
    ui->label->setText("you discarded");
  }
}

void MainWindow::on_pushButton_4_clicked()
{
  static QMessageBox::StandardButton reply;
  reply = QMessageBox::warning( this,"Warning", "Are you sure?",QMessageBox::Yes | QMessageBox::No );

  if(reply == QMessageBox::Yes)
  {
    ui->label->setText("Warning saved");
  }
  else
  {
    ui->label->setText("Warned but not saved");
  }
}


void MainWindow::on_pushButton_3_clicked()
{
  QMessageBox::information(this,"Info","You have achived Reddy's Award");
}


void MainWindow::on_pushButton_5_clicked()
{
  QMessageBox msg;
  msg.setWindowTitle("Message box");
  msg.setText("button");
  msg.setStandardButtons(QMessageBox::Ignore | QMessageBox::No | QMessageBox::Retry);

  msg.exec();
}

