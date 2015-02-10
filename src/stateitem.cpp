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
	l->setPixmap(QPixmap(":/data/"+list[icon]));
	this->layout->addWidget(l);

	this->layout->addWidget(new QLabel(tr("%1")
		.arg(list[state]),this));
	this->layout->addWidget(new QLabel(tr("capital city: %1")
		.arg(list[capital]),this));
	this->layout->addWidget(new QLabel(tr("%1 residents")
		.arg(list[residents]),this));
	this->layout->addWidget(new QLabel(tr("%1 square kilometers")
		.arg(list[area]),this));
	int sum=0;
	for(QString str:list[seats].split(","))
	{
		sum+=str.trimmed().split(" ")[1].toInt();
	}
	this->list<<QString::number(sum);
}

StateItem::~StateItem(void)
{
}

void StateItem::mousePressEvent(QMouseEvent *event)
{
	event->ignore();
	this->setFocus();
	QMessageBox::about(this,list[state],tr(
		"<b>%1</b>: %2<br/>"\
		"<b>%3</b>: %4<br/>"\
		"<b>%5</b>: %6"
	).arg(
		tr("President"),list[president],
		tr("Seats"),list[seats],
		tr("Available Seats"),list[maxseats]
	));
}
