#include <window.h>

Window::Window(QWidget *parent):QWidget(parent)
{
	this->setWindowTitle(tr("States"));
}

Window::~Window(void)
{
}
