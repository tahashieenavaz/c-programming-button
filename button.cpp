#include <graphics.h>



#define WIDTH 500 // Canvas width
#define HEIGHT 500 // Canvas height
#define FRAMERATE 60
#define TITLE "My Applicaiton Name"

void drawRectangle(int x, int y, int width, int height){
	rectangle(x-width/2, y-height/2, x+width/2,y+height/2);
}

void text(int x, int y, char* textContent){
	int i;
	for(i=0;true;i++){
		if(textContent[i] == NULL){
			break;
		}
	}
	outtextxy(x - i*2, y, textContent);
}

int main(){
	
	initwindow(WIDTH, HEIGHT, TITLE);
	
	/* Init */
	
	
	
	/* End Init  */
	
	while(true){
		cleardevice();
		drawRectangle(WIDTH/2,HEIGHT/2,100,50);
		text(WIDTH/2 - 10,WIDTH/2,"Hover Me!");
		printf("%d %d \n", mousex(), mousey());
		delay(1000/FRAMERATE);
	}
	
	return 0;
}
