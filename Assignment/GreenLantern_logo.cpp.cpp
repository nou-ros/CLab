#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>
void myInit ()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(0.0f,0.0f,0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,800.0,0.0,600.0);
}
void displayLogos ()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    glPointSize(4.0);

    //Green Colors (Green Lantern)
    glBegin(GL_QUADS);
    glColor3ub(0,128,0); //dark green
    glColorMaterial(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE);
    glVertex2i(0,0);
    glVertex2i(800,0);
    glVertex2i(800,600);
    glVertex2i(0,600);
    glEnd();

    //Starting of GreenLantern Logo
    glBegin(GL_QUADS);
    glColor3ub(255,255,255); //white
    glColorMaterial(GL_FRONT_AND_BACK,GL_AMBIENT_AND_DIFFUSE);

    glVertex2i(200,500);
    glVertex2i(560,500);
    glVertex2i(560,540);
    glVertex2i(200,540);


    glVertex2i(160,460);
    glVertex2i(600,460);
    glVertex2i(600,500);
    glVertex2i(160,500);

    glVertex2i(120,420);
    glVertex2i(640,420);
    glVertex2i(640,460);
    glVertex2i(120,460);

    glVertex2i(80,380);
    glVertex2i(680,380);
    glVertex2i(680,420);
    glVertex2i(80,420);

    glVertex2i(40,200);
    glVertex2i(720,200);
    glVertex2i(720,380);
    glVertex2i(40,380);

    glVertex2i(80,160);
    glVertex2i(680,160);
    glVertex2i(680,200);
    glVertex2i(80,200);

    glVertex2i(120,160);
    glVertex2i(640,160);
    glVertex2i(640,120);
    glVertex2i(120,120);

    glVertex2i(160,120);
    glVertex2i(600,120);
    glVertex2i(600,80);
    glVertex2i(160,80);

    glVertex2i(200,80);
    glVertex2i(560,80);
    glVertex2i(560,40);
    glVertex2i(200,40);

    //green pattern in inside
    glColor3ub(0,129,0);

    glVertex2i(250,430);
    glVertex2i(500,430);
    glVertex2i(500,470);
    glVertex2i(250,470);

    glVertex2i(300,400);
    glVertex2i(450,400);
    glVertex2i(450,430);
    glVertex2i(300,430);

    glVertex2i(250,370);
    glVertex2i(350,370);
    glVertex2i(350,400);
    glVertex2i(250,400);

    glVertex2i(400,370);
    glVertex2i(500,370);
    glVertex2i(500,400);
    glVertex2i(400,400);

    glVertex2i(200,340);
    glVertex2i(300,340);
    glVertex2i(300,370);
    glVertex2i(200,370);

    glVertex2i(450,340);
    glVertex2i(550,340);
    glVertex2i(550,370);
    glVertex2i(450,370);

    glVertex2i(200,340);
    glVertex2i(250,340);
    glVertex2i(250,260);
    glVertex2i(200,260);

    glVertex2i(500,340);
    glVertex2i(550,340);
    glVertex2i(550,260);
    glVertex2i(500,260);

    glVertex2i(200,230);
    glVertex2i(300,230);
    glVertex2i(300,260);
    glVertex2i(200,260);

    glVertex2i(450,230);
    glVertex2i(550,230);
    glVertex2i(550,260);
    glVertex2i(450,260);

    glVertex2i(250,200);
    glVertex2i(350,200);
    glVertex2i(350,230);
    glVertex2i(250,230);

    glVertex2i(400,200);
    glVertex2i(500,200);
    glVertex2i(500,230);
    glVertex2i(400,230);

    glVertex2i(300,170);
    glVertex2i(450,170);
    glVertex2i(450,200);
    glVertex2i(300,200);

    glVertex2i(250,130);
    glVertex2i(500,130);
    glVertex2i(500,170);
    glVertex2i(250,170);

    glEnd();
    //Ending of GreenLantern Logo

    glFlush();
}
int main (int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800,600);
    glutInitWindowPosition(400,600);
    glutCreateWindow("OpenGL Assignment");
    glutDisplayFunc(displayLogos);
    myInit();
    glutMainLoop();
    return 0;
}
