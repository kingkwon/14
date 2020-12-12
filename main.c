#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book{
	
	int number;
	char title[10];
};

void main(void) {
	
	struct Book *p;
	
	p = (int *)malloc(100*sizeof(int));
	p = (char *)malloc(100*sizeof(char));
	
	if(p == NULL)
	{
		printf("메모리 할당 오류 \n");
		return;
	 } 
	 
	p -> number =1;
	strcpy(p->title, "C Programming");
	
	(p+1) -> number =2;
	strcpy((p+1)->title, "Electronics");
	
	free(p);
	return;

}
