/* ------------------------------------------------------------
** 版权: (C) 2015 北京天耀宏图科技有限公司.
         http://www.greatmap.com.cn
** 名称: MyOSG
** 作者: lugd 
** 日期: 2015/04/21 
** 描述: osg头文件及lib库
** ----------------------------------------------------------*/

#ifndef MYOSG
#define MYOSG

#include <osgDB/ReadFile>

#include <osgViewer/Viewer>
#include <osgViewer/CompositeViewer>
#include <osgViewer/ViewerEventHandlers>

#include <osgGA/CameraManipulator>
#include <osgGA/StateSetManipulator>
#include <osgGA/TrackballManipulator>

#ifdef _DEBUG
#pragma comment(lib,"OpenThreadsd.lib")
#pragma comment(lib,"osgd.lib")
#pragma comment(lib,"osgDBd.lib")
#pragma comment(lib,"osgGAd.lib")
#pragma comment(lib,"osgViewerd.lib")
#else
#pragma comment(lib,"OpenThreads.lib")
#pragma comment(lib,"osg.lib")
#pragma comment(lib,"osgDB.lib")
#pragma comment(lib,"osgGA.lib")
#pragma comment(lib,"osgViewer.lib")
#endif //_debug

#endif