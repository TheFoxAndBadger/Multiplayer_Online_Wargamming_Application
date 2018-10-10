#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <cstdlib>
#include "weapon.h"
#include "marine.h"


//Random Number
int dieroll(void) {
    int ran;
    ran = rand()%6+1;
    return ran;
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    statusBar()->hide();

    //Seeding Rand
    srand(time(NULL));

    weapon boltGun(24, "Rapid Fire", 4, 0, 1);
    weapon boltPistol(12, "Pistol", 4, 0, 1);
    weapon plasmaPistol(12, "Pistol", 7, 3, 1);

    marine Ultrasmurf;
    marine Furrybait;

    Ultrasmurf.setGetWeapon(plasmaPistol);
    Furrybait.setGetWeapon(plasmaPistol);

    QString str4;
    QString str3 = "You Missed!";


    int roll1 = dieroll();
    int roll2 = dieroll();
    int roll3 = dieroll();

    str4.append(QString::number(roll1));
    str4.append(QString::number(roll2));
    str4.append(QString::number(roll3));

    //Ultrasmurf shoots

    //See if Ultra Hits
    if(roll1 >= Ultrasmurf.getBalisticSkill())
    {

        int requiredForHit;
        if(Ultrasmurf.getGetWeapon().getStrength() > Furrybait.getToughness())
        {
            requiredForHit = 3;
        }
        else if(Ultrasmurf.getGetWeapon().getStrength() == Furrybait.getToughness())
        {
            requiredForHit = 4;
        }
        else if(Ultrasmurf.getGetWeapon().getStrength() < Furrybait.getToughness())
        {
            requiredForHit = 5;
        }

        if(roll2 >= requiredForHit)
        {


            if (roll3 - Ultrasmurf.getGetWeapon().getAp() < Furrybait.getSave())
            {
                str3 = "Space Wolf Down!";
            }


        }


    }










    this->setFixedSize(this->size());
     QString str2 = "┌───────────┐"
                   "\n"
                   "╞═╤═══♛═══╤═╡"
                   "\n"
                   "└─┴───────┴─┘"
                   ;

    ui->mainTextBox->setText(str3);
    ui->textBrowser2->setText(str4);
}

MainWindow::~MainWindow()
{
    delete ui;
}


