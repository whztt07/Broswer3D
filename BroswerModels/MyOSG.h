/* ------------------------------------------------------------
** ��Ȩ: (C) 2015 ������ҫ��ͼ�Ƽ����޹�˾.
         http://www.greatmap.com.cn
** ����: MyOSG
** ����: lugd 
** ����: 2015/04/21 
** ����: osgͷ�ļ���lib��
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