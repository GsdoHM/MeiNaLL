#pragma once

#include <QtWidgets/QWidget>
#include "ui_Widget_OpenImage.h"

class Widget_OpenImage : public QWidget
{
    Q_OBJECT

public:
	Widget_OpenImage(QWidget *parent = Q_NULLPTR);

private:
    Ui::Form_OpenImage ui;
};
