#include <stateitem.h>

StateItem::StateItem(QString &line,QWidget *parent):QWidget(parent)
{
	this->list=line.split(QRegExp(";"));
	if(list.length()!=7)
	{
		throw(tr("Could not parse line \"%1\"!").arg(line));
	}

	this->layout=new QHBoxLayout(this);

	QLabel *l=new QLabel(this);
	l->setPixmap(QPixmap(":/data/"+list[0]));
	this->layout->addWidget(l);

	this->layout->addWidget(new QLabel(tr("%1")
		.arg(list[1]),this));
	this->layout->addWidget(new QLabel(tr("capital city: %1")
		.arg(list[2]),this));
	this->layout->addWidget(new QLabel(tr("%1 residents")
		.arg(list[3]),this));
}

StateItem::~StateItem(void)
{
}
