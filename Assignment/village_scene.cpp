#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>

void draw_circle(float cx, float cy, float r, int num )
{
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0; i<num; i++)
    {
        float theta = (2.0f * 3.1415926f * (float)(i))/(float)(num); //current angle
        float x=r*cos(theta);//calculate the x component
        float y=r*sin(theta);//calculate the y component
        glVertex2f(x+cx,y+cy);//output vertex
    }
    glEnd();
}
void scene()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    glColor3f(0.4, 0.5, 1.0);
	glBegin(GL_POLYGON); //Sky
	glVertex2i (1280, 800);
    glVertex2i (0, 800);
	glColor3f(0.7, 0.7, 1.0);
	glVertex2i (0, 200);
    glVertex2i (1280, 200);
	glEnd();

    glColor3f(0.0, 0.7, 0.0);
	glBegin(GL_POLYGON); //field
	glVertex2i (0, 300);
	glVertex2i (250, 380);
	glVertex2i (450, 370);
	glVertex2i (700, 350);
	glVertex2i (900, 330);
	glVertex2i (1100, 280);
	glVertex2i (1180, 290);
	glVertex2i (1230, 280);
	glVertex2i (1280, 270);
	glVertex2i (1280, 200);
	glVertex2i (0, 200);
	glEnd();
	//river
    glColor3f(0.25, 0.41, 0.81);//royalblue
	glBegin(GL_POLYGON);
	glVertex2i (0, 200);
	glVertex2i (1280, 200);
	glVertex2i (1280, 0);
	glVertex2i (0, 0);
	glEnd();

    //sun
    glColor3f (1.0, 1.0, 0.0); //yellow
    draw_circle(700,660,40,1280);
    //cloud left
    glColor3f (1.0, 1.0, 1.0); //white
    draw_circle(250,650,40,1280);
    draw_circle(200,620,40,1280);
    draw_circle(250,620,40,1280);
    draw_circle(300,620,40,1280);

    //cloud right
    draw_circle(1050,650,40,1280);
    draw_circle(1000,620,40,1280);
    draw_circle(1050,620,40,1280);
    draw_circle(1100,620,40,1280);
    //tree
    //darkred
    glColor3f (0.54, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i (580,500);
    glVertex2i (620, 500);
    glVertex2i (620, 355);
    glVertex2i (580, 358);
    glEnd();
    //green
    glColor3f (0.13, 0.54, 0.13);
    draw_circle(600,530,50,1280);
    draw_circle(550,500,50,1280);
    draw_circle(600,480,50,1280);
    draw_circle(650,500,50,1280);
    //windmill
    //body
    glColor3f (0.41, 0.41, 0.41); //dimgray
    glBegin(GL_POLYGON);
    glVertex2i (1080,390);
    glVertex2i (1100,390);
    glVertex2i (1100,290);
    glVertex2i (1080,290);
    glEnd();
    //triangles
    glColor3f (0.29, 0.0, 0.51);//indigo
    glBegin(GL_POLYGON);
    glVertex2i (1080,390);
    glVertex2i (1085,470);
    glVertex2i (1100,390);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i (1090,380);
    glVertex2i (1010,350);
    glVertex2i (1090,400);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i (1090,380);
    glVertex2i (1170,350);
    glVertex2i (1090,400);
    glEnd();
    glColor3f (0.0, 0.0, 0.0);//black background circle
    draw_circle(1090,390,12,1280);
    glColor3f (1.0, 1.0, 1.0);//white foreground circle
    draw_circle(1090,390,5,1280);

    glPopMatrix();

    glFlush ();
}
void boat()
{
    //boat
    glColor3f(0.50, 0.0, 0.0);//maroon
	glBegin(GL_POLYGON);
	glVertex2i (80, 80);
	glVertex2i (320, 80);
	glVertex2i (300, 30);
	glVertex2i (100, 30);
	glEnd();
    glColor3f(1.0, 1.0, 1.0);//white
	glBegin(GL_POLYGON);
	glVertex2i (150, 100);
	glVertex2i (260, 100);
	glVertex2i (270, 80);
	glVertex2i (120, 80);
	glEnd();
	//window1
	glColor3f(0.0, 0.0, 0.0);//black
	glBegin(GL_POLYGON);
	glVertex2i (160, 95);
	glVertex2i (180, 95);
	glVertex2i (180, 85);
	glVertex2i (160, 85);
	glEnd();
	//window2
	glBegin(GL_POLYGON);
	glVertex2i (190, 95);
	glVertex2i (210, 95);
	glVertex2i (210, 85);
	glVertex2i (190, 85);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2i (220, 95);
	glVertex2i (240, 95);
	glVertex2i (240, 85);
	glVertex2i (220, 85);
	glEnd();
	glColor3f(0.94, 0.90, 0.54);//khaki
	glBegin(GL_POLYGON);
	glVertex2i (180, 160);
	glVertex2i (300, 110);
    glVertex2i (200, 110);
	glVertex2i (200, 100);
	glVertex2i (180, 100);
	glEnd();
    //Home
    //shed
    glColor3f (1.0, 0.49, 0.31);//Coral
    glBegin(GL_POLYGON);
    glVertex2i (250, 520);
    glVertex2i (250, 530);
    glVertex2i (400, 530);
    glVertex2i (400, 520);
    glVertex2i (450, 480);
    glVertex2i (200, 480);

    glEnd();
    //body

    glColor3f (.69, 0.13, 0.13); //fire brick
    glBegin(GL_POLYGON);
    glVertex2i (220,480);
    glVertex2i (430, 480);
    glVertex2i (430, 370);
    glVertex2i (220, 370);
    glEnd();

    //door

    glColor3f (1.0, 0.84, 0.0);//gold
    glBegin(GL_POLYGON);
    glVertex2i (300,420);
    glVertex2i (340, 420);
    glVertex2i (340, 370);
    glVertex2i (300, 370);
    glEnd();

    //window left
    glColor3f (1.0, 0.84, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i (260,440);
    glVertex2i (290, 440);
    glVertex2i (290, 470);
    glVertex2i (260, 470);
    glEnd();

    //window right
    glColor3f (1.0, 0.84, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i (350,440);
    glVertex2i (380, 440);
    glVertex2i (380, 470);
    glVertex2i (350, 470);
    glEnd();
}
void init (void)
{

    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1280.0, 0.0, 720.0);
}
void display(void)
{

    scene();
    boat();
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1280, 720);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("CG_Projects");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
