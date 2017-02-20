#include<GL/glut.h>
void draw()
{
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_LINES);
glVertex2i(10,10);
glVertex2i(100,10);
glVertex2i(100,10);
glVertex2i(50,100);
glVertex2i(50,100);
glVertex2i(10,10);
glVertex2i(50,10);
glVertex2i(27,50);
glVertex2i(50,10);
glVertex2i(78,50);
glVertex2i(27,50);
glVertex2i(78,50);
glEnd();
glFlush();
}

int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(200,500);
glutInitWindowSize(700,400);
glutCreateWindow("ATME");
glClearColor(1.0,0.0,0.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,200.0,0.0,150.0);
glutDisplayFunc(draw);
glutMainLoop();
return 0;
}
