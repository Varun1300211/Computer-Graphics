//Write a program to draw a line using DDA algorithm
#include<GL/glut.h>
#include<math.h>
#include<stdio.h>

double x1,x2,y11,y2;

void MyInit( void )
{
glClearColor(0.0,0.0,0.0,0.0);
glColor3f(1.0,0.0,0.0);
glPointSize(5.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,100.0,0.0,100.0);
}
int round_n(double a)
{
return floor(a+0.5);
}
void DDA_Line()
{
double x,y,dx,dy,steps;
float xinc,yinc;

dx=(x2-x1);
dy=(y2-y11);

if(abs(dx)<abs(dy) || abs(dx)==abs(dy))
steps = dx;
else 
steps = dy;

xinc = (float)(dx/steps);
yinc = (float)(dy/steps);
x=x1;
y=y11;

glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_POINTS);
glVertex2f(x,y);
for(int k=0;k<steps;k++)
{
x+=xinc;
y+=yinc;
glVertex2f(round_n(x),round_n(y));
}
glEnd();
glFlush();
}
int main(int argc,char **argv)
{
printf("Enter initial points of line x1 and y1 (space separate): ");
scanf("\n%lf %lf",&x1,&y11);
printf("Enter end points of line x2 and y2 (space separate): ");
scanf("\n%lf %lf",&x2,&y2);
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(50,50);
glutCreateWindow("DDA Line");
MyInit();
glutDisplayFunc(DDA_Line);
glutMainLoop();
return 0;
}

