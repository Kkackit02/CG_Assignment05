#ifndef CAMERA_H
#define CAMERA_H

#include "camera.h"
#include <cmath>  // C++ ǥ�� ���� ���̺귯��
#include <cstdio> // C++ ǥ�� ����� (�ʿ� ��)
typedef struct {
    float eye[3]; // ī�޶� ��ġ
    float u[3];   // ������
    float v[3];   // ����
    float w[3];   // ����
} Camera;

#endif