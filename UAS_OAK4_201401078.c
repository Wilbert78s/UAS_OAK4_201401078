#include<at89x52.h>
#include"LCD/lcd4bit.c"

void sleep(int s){
	while(s--){}
}

int main(){
    init_lcd();
    while(1){     
    	if(P1_0 ==0){ 
    		lcd_clear();
        	gotoxy_lcd(0,0);
        	print_lcd("WILBERT");
        	gotoxy_lcd(0,1);
        	print_lcd("201401078");
        	sleep(1000000000);
        	lcd_clear();
        	gotoxy_lcd(0,0);
        	print_lcd("KOM B");
        	gotoxy_lcd(0,1);
        	print_lcd("OAK 4");
        	sleep(1000000000);
        }
        if(P1_0 ==1){
        	lcd_clear();
        }
        if(P1_3 ==0){
        	P3 = 0b10000001;   	
    		sleep(100000);
    		P3 = 0b11110011;   	
    		sleep(100000);
    		P3 = 0b01001001;   	
    		sleep(100000);
    		P3 = 0b01100001;    	
    		sleep(100000);
    		P3 = 0b00110011;   	
    		sleep(100000);
    		P3 = 0b00100101;   	
    		sleep(100000);
    		P3 = 0b00000101;   	
    		sleep(100000);
    		P3 = 0b11110001;    	
    		sleep(100000);
    		P3 = 0b00000001;   	
    		sleep(100000);
    		P3 = 0b00100001;   	
    		sleep(100000);	
        }       
        if(P1_3 ==1){
    		P3 = 0b11111111;     				
        } 
    }  
}