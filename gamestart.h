/*欢迎界面，同时对游戏具体操作方式做一个声明，然后显示游戏元素。
 * 这里我们需要用到 openGL 的绘图接口。具体包括：

void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
 红、绿、蓝和 alpha 值，指定值范围均为[ 0.0f,1.0f ]

void glcolor3f(GLfloat red，GLfloat green，GLfloat blue); 设置画笔颜色

void glRasterPos2f( GLfloat x, GLfloat y);要显示字体的起始坐标

void glutBitmapCharacter(void *font, int character);
 渲染字符 font:字体类型 character:具体字符

void glutSwapBuffers(void);刷新

void glMatrixMode(GLenum mode);
 投影方式 GLenum mode:投影方式，有3种模式: GL_PROJECTION 投影,
 GL_MODELVIEW 模型视图, GL_TEXTURE 纹理.

void glLoadIdentity(void);恢复初始坐标系

void glViewport(GLint x,GLint y,GLsizei width,GLsizei height);
 定义窗口 x:起始横坐标 y:起始纵坐标 width:宽度 height:高度

void glOrtho(GLdouble left,GLdouble right,GLdouble bottom,
 GLdouble top,GLdouble near,GLdouble far);
 设置或修改修剪空间的范围.这个函数的操作是创建一个正射投影矩阵，
 并且用这个矩阵乘以当前矩阵。其中近裁剪平面是一个矩形，
 矩形左下角点三维空间坐标是（left，bottom，-near），
 右上角点是（right，top，-near）；远裁剪平面也是一个矩形，
 左下角点空间坐标是（left，bottom，-far），右上角点是（right，top，-far）*/

#ifndef PACMAN_GAMESTART_H
#define PACMAN_GAMESTART_H

#include <iterator>

void welcomeScreen();
void display();
void reshape(int w, int h);

#endif //PACMAN_GAMESTART_H
