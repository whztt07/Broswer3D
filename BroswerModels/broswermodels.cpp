#include "broswermodels.h"

#include <ActiveQt/QAxFactory>
#include <osgDB/ReadFile>

BroswerModels::BroswerModels(QWidget *parent)
: GraphicsView(parent)
{
	osg::ref_ptr<osg::Node> pNode = osgDB::readNodeFile("E:/GreatMap/project/GM3ds/dev/trunk/ext/osg3.2.1_x86/Data/cow.osg");
	this->getRoot()->addChild(pNode);
}

QAXFACTORY_DEFAULT(BroswerModels,
	   "{40657603-1960-4764-AC97-6AD788CDDDD8}",
	   "{07F2F6DE-D3A1-4E74-95C0-23C98C43A450}",
	   "{4A1AC37A-E375-4450-ADEC-82A6900FD6FB}",
	   "{7CF7BB56-1470-4172-B805-78FE3323BC4F}",
	   "{CCAEC7E3-D3ED-4C48-BC40-523DC7A30109}")
