#ifndef STATE_H
#define STATE_H

#include <QtCore>

class State:public QObject
{
	Q_OBJECT

public:
	State(QString line,QWidget *parent=0);
	~State(void);
};

#endif /** STATE_H **/
