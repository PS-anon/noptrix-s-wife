#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	int cone;
	char ctwo[100];
	int cthree;
	#define BANNER "\
 		 _  ___      _____\n\
 	| \\| \\ \\    / / __|\n\
 	| .` |\\ \\/\\/ /| _|\n\
 	|_|\_| \\_/\\_/ |_|\n\n"  
                    

	printf("Welcome , noptrix .... :). \nYeah , PS and v4l were bored af so they decided to make you a timer :-) enjoy. \nGive us a sec to backdoor your pc ... ok ?");
	printf("Oh fuck I forgot we have a menu for ya ...hehehe \n1)About the timer. \n2)Start the timer. \n3)Check for backdoor \nany other key)Quit");	
	printf("What shall it be \n{->");
	scanf("%d", &cone);
	if(cone == 1) {
		printf("->So, this is a timer, made by PS and v4l for  noptrix in order to help his personal assistent to manage  shits more easily.\n-You can use it by typing 2 into the main menu , then you type how much seconds does the timer lasts and the reson\n-Good luck");
	}
	if(cone == 2){
		printf("So , for what task are ya gonna use the timer ?\n{-> ");
		scanf("%s", ctwo);
		printf ("Now how much seconds :}\n{->");
		scanf("%d", &cthree);
		sleep(cthree);
		printf("Your task is ready ! ");
		printf("%s", ctwo);
		//https://www.youtube.com/watch?v=msSc7Mv0QHY
		system("xdg-open https://www.youtube.com/watch?v=msSc7Mv0QHY");
		
	}else{
		printf("hmmm , See ya ");
		exit(0);
	}	
	return  0;
}
