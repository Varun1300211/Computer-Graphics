#include<GL/freeglut.h>
#include<GL/freeglut_std.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

void init(){
	
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	//Line C
	glutInitWindowSize(500,500);
	glutInitWindowPosition(300,300);
	
	glutCreateWindow("Point");
}

void renderScene()
{

glClear(GL_COLOR_BUFFER_BIT);

glColor3f(1,0,0);
glPointSize(10.0f);    
glBegin(GL_POINTS);
glVertex2i(50,40);
glEnd();

glColor3f(0,1,0);
glPointSize(20.0f);
glBegin(GL_POINTS);
glVertex2i(100,40);
glEnd();

glColor3f(0,0,1);
glPointSize(30.0f);
glBegin(GL_POINTS);
glVertex2i(150,40);
glEnd();

glColor3f(1,1,0);
glPointSize(40.0f);
glBegin(GL_POINTS);
glVertex2i(200,40);
glEnd();

glColor3f(1,0,1);
glPointSize(50.0f);
glBegin(GL_POINTS);
glVertex2i(250,40);
glEnd();
glFlush();

//glutSwapBuffers();

}

void display()
{
	glClearColor(0.0,1.0,1.0,0.0);
	//glClearColor(1.0,0.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,300,0.0,200);
	glClear(GL_COLOR_BUFFER_BIT);
       	glFlush();
}


int main(int argc,char **argv)
{
	glutInit(&argc,argv);			//Line A
	init();	
	display();				//Line B
	glutDisplayFunc(renderScene);
	glutMainLoop();
        
 	return EXIT_SUCCESS;
}
