// opengl.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include "StdAfx.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>         /* glut.h ���� gl.h��glu.h*/
#endif

void display(void)
{
	// �����ɫ������
	glClear(GL_COLOR_BUFFER_BIT);

	// ���ƾ���
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glEnd();

	// ִ�л�����
	glFlush();
}

int main(int argc, char** argv)
{
	// ��ʼ������
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("���ƾ���");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

