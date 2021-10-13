#include<GL/freeglut.h>

//Program to create an empty Widdow
void init(){
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	//Line C
	//glutInitWindowSize(640,480);
        glutInitWindowSize(200,200);
	//glutInitWindowPosition(1000,200);
        glutInitWindowPosition(300,0);
	glutCreateWindow("Window1");
	glutInitWindowSize(200,200);
        glutInitWindowPosition(600,0);
	glutCreateWindow("Window2");
}

void display()
{
	glClearColor(1.0,1.0,1.0,0.0);
	glClearColor(1.0,0.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	// gluOrtho2D(0.0,100.0,0,100.0);
	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);			//Line A
	init();					//Line B
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}
