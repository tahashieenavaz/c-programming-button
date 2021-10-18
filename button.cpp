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
		
		int buttonCenterX = WIDTH/2;
		int buttonCenterY = HEIGHT/2;
		int buttonWidth = 100;
		int buttonHeight = 50;
		/* Check Hover */
	
		if(
			mousex() <= (buttonCenterX + buttonWidth/2) &&
			mousex() >= (buttonCenterX - buttonWidth/2) && 
			mousey() <= (buttonCenterY + buttonHeight/2) &&
			mousey() >= (buttonCenterY - buttonHeight/2)
		){
			setcolor(BLUE);
		}else{
			setcolor(WHITE);
		}
		
		
		drawRectangle(buttonCenterX,buttonCenterY,buttonWidth,buttonHeight);
		text(WIDTH/2 - 14,HEIGHT/2 - 7,"Hover Me!");


	
		delay(1000/FRAMERATE);
	}
	
	return 0;
}
