#pragma once
#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include "ui_myDialog.h"

class myDialog : public QDialog
{
    Q_OBJECT

public:
    explicit myDialog(QWidget *parent = 0);
    ~myDialog();

private:
    Ui::Form *ui;
};

#endif // MYDIALOG_H
