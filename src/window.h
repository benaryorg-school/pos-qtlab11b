#ifndef WINDOW_H
#define WINDOW_H

#include <QtCore>
#if QTCORE_VERSION>=0x050000
#include <QtWidgets>
#endif
#include <QtGui>

class Window:public QWidget
{
	Q_OBJECT

public:
	Window(QWidget *parent=0);
	~Window(void);

private:

	QTableWidget *table;
};

#endif /** WINDOW_H **/
