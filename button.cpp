


#include <graphics.h>

#define WIDTH 500 // Canvas width
#define HEIGHT 500 // Canvas height
#define FRAMERATE 60
#define TITLE "Button Hover Effect - Taha Shieenavaz"


void text(int x, int y, char* textContent);
void drawRectangle(int x, int y, int width, int height);


int main(){
	
	initwindow(WIDTH, HEIGHT, TITLE);
	
	/* Init */
	
	int clickX, clickY;
	bool mouseKeyPress = false;
	
	/* End Init  */
	
	// Button meta data
	
	int buttonCenterX = WIDTH/2;
	int buttonCenterY = HEIGHT/2;
	int buttonWidth = 100;
	int buttonHeight = 50;


	while(true){
		cleardevice();
	
		/* Check Hover */
		if(
			mousex() <= (buttonCenterX + buttonWidth/2) &&
			mousex() >= (buttonCenterX - buttonWidth/2) && 
			mousey() <= (buttonCenterY + buttonHeight/2) &&
			mousey() >= (buttonCenterY - buttonHeight/2)
		){
			
			if(ismouseclick(WM_LBUTTONDOWN)){
				mouseKeyPress = true;
			}
			if(ismouseclick(WM_LBUTTONUP)){
				mouseKeyPress = false;
			}
			
			if(mouseKeyPress){
				setcolor(RED);
				system("START https://tahashieenavaz.github.io");
			}else{
				clearmouseclick(WM_LBUTTONDOWN);
				clearmouseclick(WM_LBUTTONUP);
				setcolor(GREEN);
			}
			
		}else{
			setcolor(WHITE);
		}
		
		
		drawRectangle(buttonCenterX,buttonCenterY,buttonWidth,buttonHeight);
		text(WIDTH/2 - 14,HEIGHT/2 - 7,"Click Me!");


	
		delay(1000/FRAMERATE);
	}
	
	return 0;
}


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
