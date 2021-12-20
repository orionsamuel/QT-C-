#include "combobox.h"
#include "ui_combobox.h"

ComboBox::ComboBox(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ComboBox)
{
    ui->setupUi(this);
    QString so[] {"Linux", "Windows", "macOS", "FreeBSD"};
    QString icons[] {":linux.png", ":windows.png", ":macos.png", ":freebsd.png"};
    for(unsigned long int i = 0; i < sizeof(so) / sizeof(so[0]); ++i){
        ui->comboBox->addItem(QIcon(icons[i]), so[i]);
    }
}

ComboBox::~ComboBox()
{
    delete ui;
}


void ComboBox::on_pushButton_clicked()
{
    ui->label->setText("Você escolheu: <b>" + ui->comboBox->currentText() + "</b>");
}

