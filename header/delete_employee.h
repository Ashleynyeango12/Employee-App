#ifndef DELETE_EMPLOYEE_H
#define DELETE_EMPLOYEE_H

#include <QDialog>

namespace Ui {
class delete_employee;
}

class delete_employee : public QDialog
{
    Q_OBJECT

public:
    explicit delete_employee(QWidget *parent = nullptr);
    ~delete_employee();

private slots:
    void on_delete_employee_accepted();

    void on_pushButton_2_clicked();

private:
    Ui::delete_employee *ui;
};

#endif // DELETE_EMPLOYEE_H
