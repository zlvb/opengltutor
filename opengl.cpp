// opengl.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include "StdAfx.h"
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>         /* glut.h 包含 gl.h和glu.h*/
#endif

void display(void)
{
	// 清除颜色缓冲区
	glClear(GL_COLOR_BUFFER_BIT);

	// 绘制矩形
	glBegin(GL_POLYGON);
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);
	glEnd();

	// 执行缓冲区
	glFlush();
}

int main(int argc, char** argv)
{
	// 初始化窗口
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("绘制矩形");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}

