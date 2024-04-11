#ifndef UPDATE_EMPLOYEE_H
#define UPDATE_EMPLOYEE_H

#include <QDialog>

namespace Ui {
class update_Employee;
}

class update_Employee : public QDialog
{
    Q_OBJECT

public:
    explicit update_Employee(QWidget *parent = nullptr);
    ~update_Employee();

private slots:
    void on_update_clicked();

private:
    Ui::update_Employee *ui;
};

#endif // UPDATE_EMPLOYEE_H
