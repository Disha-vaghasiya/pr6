#include<stdio.h>
#include<string.h>
void main(){
	int i,j;
	char str[100];
	int len;
		int count;
	
	printf("Enter String  :- ");
    gets(str);
    
	len=strlen(str);
	
	for(i=0; i<len; i++){
			count=1;
		if(str[i]){
			 
		for(j=i+1; j<len; j++){
		 
			if(str[i]==str[j]){
				count++;
				str[j]='\0';
			}
		
		}
	
			printf("%c = %d\n",str[i],count);
				}
	}
	
}
