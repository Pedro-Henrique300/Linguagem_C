#include<stdio.h>

int main(){
	
	int i;
	
	for(i=1; i<=10; i++){
		
		if(i==5){
			
			continue; // Pula uma " volta " da repetição, porém o laço se mantem até o final.
		}
		
		printf("%d ", i);
		
	}
	
	return 0;
	
}

