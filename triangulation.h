#pragma once
#ifndef TRIANGULATION_H
#define TRIANGULATION_H
#include<iostream>

//pcl
#include<pcl/io/pcd_io.h>		
#include<pcl/point_types.h>	
#include<pcl/features/normal_3d.h>
#include<pcl/visualization/cloud_viewer.h>
#include<pcl/surface/gp3.h>
#include<pcl/io/vtk_lib_io.h>

//vtk
#include <vtkVersion.h>
#include <vtkSmartPointer.h>
#include <vtkLookupTable.h>
#include <vtkActor.h>
#include <vtkDelaunay2D.h>
#include <vtkDelaunay3D.h>
#include <vtkMath.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkProperty.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSmoothPolyDataFilter.h>
#include <vtkPolyDataNormals.h>
#include <vtkCamera.h>
#include <vtkCellArray.h>
#include <vtkXMLPolyDataWriter.h>
#include <vtkPolyDataWriter.h>
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
	//using vtkSmartPointer to smooth the point cloud
	void vtkSmooth(pcl::PointCloud<pcl::PointXYZ>::Ptr cloud);
};
#endif

