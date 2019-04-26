#include <stdio.h>
#include <stdlib.h>

struct person {
	char name[50];
	char surname[50];
	int age;
	int nota[];
};


int main(int argc, char *argv[]) {
	int a, i, nrst, nrl;
	
	printf("Jepni numrin e studenteve: ");
	scanf("%d", &nrst);
	struct person Student[nrst];
	
	printf("Jepni numrin e lendeve: ");
	scanf("%d", &nrl);
	char *lendet[nrl][50];
		
	for(i=0; i<nrl; i++){
		printf("Jepni emrin e lendes %d: ", i+1);
		scanf("%s", &lendet[i]);
		printf("\n");
	}
	
	printf(" ---  Jepni te dhenat e studenteve ---\n ");

	for(a=0; a<nrst; a++){
		printf("Studenti %d: \n", a+1);
		printf("Jepni Emrin: ");
		scanf("%s", &Student[a].name);
		printf("Jepni Mbiemrin: ");
		scanf("%s",  &Student[a].age);
		printf("Jepni Moshen: ");
		scanf("%d", &Student[a].age);
		printf("\n");
		
		printf("Jepni notat per lendet: \n");
			
		for(i=0; i<nrl; i++){
			printf("Jepni noten per %s: ", lendet[i]);
			scanf("%d", &Student[a].nota[i]);
			printf("\n");
		}
		
	}
	
	return 0;
}
