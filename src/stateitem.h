#ifndef STATEITEM_H
#define STATEITEM_H

#include <QtCore>
#if QTCORE_VERSION>=0x050000
#include <QtWidgets>
#endif
#include <QtGui>

class StateItem:public QItemDelegate
{
	Q_OBJECT

public:
	StateItem(QWidget *parent=0);
	~StateItem(void);

	void paint(QPainter *p,const QStyleOptionViewItem &opt,
		const QModelIndex &index) const;
};

#endif /** STATEITEM_H **/
