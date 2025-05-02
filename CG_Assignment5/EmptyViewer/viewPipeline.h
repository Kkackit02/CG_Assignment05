#ifndef VIEWPOINT_H
#define VIEWPOINT_H

#include "camera.h"
#include <cmath>  // C++ ǥ�� ���� ���̺귯��
#include <cstdio> // C++ ǥ�� ����� (�ʿ� ��)

float* M_Model(float* vertex, float M[4][4]);
float* M_Camera(float* vertex, Camera cameraData);
float* M_Orthograph(float* vertex, float l, float r, float b, float t, float n, float f);
float* M_Perspective(float* vertex, float n, float f);
float* M_Viewport(float* vertex, int nx, int ny);

#endif // VIEWPOINT_H
