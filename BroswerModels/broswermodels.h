#ifndef BROSWERMODELS_H
#define BROSWERMODELS_H

#include <ActiveQt/QAxBindable>
#include "graphicsview.h"

class BroswerModels : public GraphicsView, public QAxBindable
{
	Q_OBJECT

public:
	BroswerModels(QWidget *parent = 0);

private:
	
};

#endif // BROSWERMODELS_H
