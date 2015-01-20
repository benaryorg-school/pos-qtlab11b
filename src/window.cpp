#include <window.h>

Window::Window(QWidget *parent):QWidget(parent)
{
	this->setWindowTitle(tr("States"));

	QFile f(":/data/bundeslaender.csv");
	if(!f.open(QIODevice::ReadOnly))
	{
		throw(tr("Could not read from file!"));
	}
	f.close();
}

Window::~Window(void)
{
}
