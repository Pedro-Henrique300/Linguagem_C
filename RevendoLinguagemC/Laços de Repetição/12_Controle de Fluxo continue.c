#include<stdio.h>

int main(){
	
	int i;
	
	for(i=1; i<=10; i++){
		
		if(i==5){
			
			continue; // Pula uma " volta " da repeti��o, por�m o la�o se mantem at� o final.
		}
		
		printf("%d ", i);
		
	}
	
	return 0;
	
}

