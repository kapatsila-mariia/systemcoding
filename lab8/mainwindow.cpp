#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}
 double F(double c)
{
     c=1.1;
    double p;
    int i,j;
    int b[2][3]={ {1,2,3},
                  {6,5,4}
                };
    for(i=0;i<2;i++)
            for(j=0;j<3;j++)
     p = sqrt(c + b[i][j])/pow(b[i][j],2);

        return p;
}

void MainWindow::on_pushButton_clicked()
{

        int n = ui-> txtn-> text (). toInt ();
        int x = ui-> txtm-> text (). toInt ();
        double a=0.98;
        double fun;
        int i;
        for(i=0;i<n;i++)
        fun= pow(F(x),2)+a*sqrt(F(x))*(F(x));

        QString s= QString :: number (fun);
        ui-> rezult -> setText (s);

}
