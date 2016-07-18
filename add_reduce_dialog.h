#ifndef ADD_REDUCE_DIALOG_H
#define ADD_REDUCE_DIALOG_H

#include <QDialog>

namespace Ui {
class Add_Reduce_Dialog;
}

class Add_Reduce_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Add_Reduce_Dialog(QWidget *parent = 0);
    ~Add_Reduce_Dialog();

private slots:
    void on_okButton_clicked();

    void on_cancelButton_clicked();

    void on_addButton_clicked();

    void on_deleteButton_clicked();

private:
    Ui::Add_Reduce_Dialog *ui;
    int count;
};

#endif // ADD_REDUCE_DIALOG_H