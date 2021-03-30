/*
======================================================
|                                                    |
|  This Universe is designed by                      |
|		  Zhuoran Wang                               |
|                                                    |
| Every programmer is the god of his own universe.   |
|                                                    |
|       Updated Date: 2021.3.30  					 |
|           Version:1.0v                             |
======================================================
*/
//Free fall of the ball
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

/*
s = v0 + 1/2gt^2
v = v0 + gt
*/

const int total_height = 30;  // The maximum height the ball can move
const int gravity = 1; 
const int front_space = 10; 
/*
initiate the time variable as a global variable
to ensure that this variable can be shared globally.
*/
int time = 0; 

//initial velocity
double v = 0.0;
int y = 0; //height of the ball

int Y_position(int t, int v)
{
	v = v*t;
	y = v + 0.5*gravity*t*t;
	return y;
}

void show()
{
	for (int i = 0; i < Y_position(time, v); i++) {
		printf("\n");
	}

	for (int i = 0; i < front_space; i++) {
		printf(" ");
	}

	printf("O");
	puts("");
}

int main()
{
	for(time = 0; time<20; time++)
	{
		if(y<=total_height){
			system("cls");
			show();
		} 
	} 

	return 0;
}
