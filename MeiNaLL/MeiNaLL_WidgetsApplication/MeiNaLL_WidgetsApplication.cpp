#include "MeiNaLL_WidgetsApplication.h"

MeiNaLL_WidgetsApplication::MeiNaLL_WidgetsApplication(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	initSlots();
}

void MeiNaLL_WidgetsApplication::initSlots()
{
	connect(ui.actionOpenImage, &QAction::triggered, this, &MeiNaLL_WidgetsApplication::slot_actionOpenImageTriggered);
}

void MeiNaLL_WidgetsApplication::slot_actionOpenImageTriggered(bool flag)
{
	m_widgetOpenImage.show();
}
