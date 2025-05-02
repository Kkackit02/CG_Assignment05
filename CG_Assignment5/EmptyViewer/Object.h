#ifndef OBJECT_H
#define OBJECT_H

#include "camera.h"
#include <cmath>  // C++ ǥ�� ���� ���̺귯��
#include <cstdio> // C++ ǥ�� ����� (�ʿ� ��)
typedef struct {
    float* vertexBuffer;
    int* indexBuffer;
    int numVertices;
    int numTriangles;
}ObjectData; 
#endif