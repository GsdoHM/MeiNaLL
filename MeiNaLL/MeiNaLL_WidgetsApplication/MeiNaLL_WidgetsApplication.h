#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MeiNaLL_WidgetsApplication.h"
#include "Widget_OpenImage.h"

class MeiNaLL_WidgetsApplication : public QMainWindow
{
    Q_OBJECT

public:
    MeiNaLL_WidgetsApplication(QWidget *parent = Q_NULLPTR);

private:
    Ui::MeiNaLL_WidgetsApplicationClass ui;

	Widget_OpenImage m_widgetOpenImage;

	void initSlots();
	void slot_actionOpenImageTriggered(bool flag);
};
