/* Calva Lorenzo Iv�n Eduardo
Pr�ctica 2
VS Versi�n 2017
Este programa dibuja las iniciales de Computaci�n Gr�fica y del nombre del alumno con distintas direcciones en el degradado */
#include "Main.h"
void InitGL(GLvoid)     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar


}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	glBegin(GL_QUADS);         //GL_PONITS (puntos), GL_LINES (lineas), GL_LINES_LOOP (unir lineas), GL_TRIANGLES (triangulo), GL_QUADS (cuadrado), GL_POLYGON (crea un poligono sin importar vertices los toma)

	glColor3f(0.0f, 0.0f, 0.0f);     //Cambio de colores, se pueden hacer degradados dependiendo donde se coloque el glColor (entre vertices)
	glVertex3f(-5.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(-9.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(-8.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(-5.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.00f);
	glVertex3f(-8.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(-9.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(-9.0f, -6.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(-8.0f, -5.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.0f, -5.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(-8.0f, -5.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(-9.0f, -6.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(-5.0f, -6.0f, 0.0f);
	
	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-4.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(0.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(0.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(-3.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-4.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(-3.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(-3.0f, -5.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(-4.0f, -6.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.0f, -5.0f, 0.0f); 
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(-1.0f, -5.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(0.0f, -6.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(-4.0f, -6.0f, 0.0f); 
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, -3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(0.0f, -2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(0.0f, -6.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(-1.0f, -5.0f, 0.0f); 
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-2.0f, -2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(0.0f, -2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.5f);
	glVertex3f(-1.0f, -3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(-2.0f, -3.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(1.0f, 3.0f, 0.0f);
	glVertex3f(4.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(4.0f, 2.0f, 0.0f);
	glVertex3f(1.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(2.0f, 2.0f, 0.0f);
	glVertex3f(3.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(3.0f, -5.0f, 0.0f);
	glVertex3f(2.0f, -5.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(1.0f, -5.0f, 0.0f);
	glVertex3f(4.0f, -5.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(4.0f, -6.0f, 0.0f);
	glVertex3f(1.0f, -6.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(5.0f, 3.0f, 0.0f);
	glVertex3f(5.0f, -6.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(6.0f, -6.0f, 0.0f);
	glVertex3f(6.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(6.0f, 3.0f, 0.0f);
	glVertex3f(6.0f, 2.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(9.0f, 2.0f, 0.0f);
	glVertex3f(9.0f, 3.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.25f);
	glVertex3f(6.0f, -5.0f, 0.0);
	glVertex3f(6.0f, -6.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.75f);
	glVertex3f(9.0f, -6.0f, 0.0f);
	glVertex3f(9.0f, -5.0f, 0.0f);

	glEnd();

	glFlush();
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Ortogonal
	glOrtho(-10, 10, -10, 10, -1, 2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 27: exit(0);
		break;
	}
	glutPostRedisplay();
}

int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitWindowSize(500, 500);	// Tama�o de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 2"); // Nombre de la Ventana
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut funci�n de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut funci�n en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut funci�n de manejo de teclado
	glutMainLoop();          // 

	return 0;
}
