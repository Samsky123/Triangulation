#pragma once
#ifndef TRIANGULATION_H
#define TRIANGULATION_H

#include<pcl/io/pcd_io.h>		
#include<pcl/point_types.h>	
#include<pcl/features/normal_3d.h>
#include<pcl/visualization/cloud_viewer.h>
#include<pcl/surface/gp3.h>
#include<pcl/io/vtk_lib_io.h>
#include<iostream>
/**********************************************
���ļ����ڶԵ���pcd�ļ���һЩ����
Edited by HSW 2016.06.25:
	��pcd�ļ����ж�ȡ�����п����������񻯡�
**********************************************/
class Triangulation{
public:
	Triangulation();
	~Triangulation();
	// read pcd files
	void readPCDFiles(std::string &fileName);
	// save points data using .pcd formate
	void writePCDFiles(std::string &fileName);
	//����ǲ�����ɫ��Ϣ�ĵ��ƿ�����������
	void showTriangulation(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud);
	//����Ǵ���ɫ��Ϣ�ĵ��ƿ�����������
	void showTriangulationRGB(pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud);
};
#endif

