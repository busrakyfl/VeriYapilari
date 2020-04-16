#include <stdio.h>
#include <stdlib.h>

typedef struct bag{
	int veri;
	struct bag * sonraki;
}kutu;

kutu *ilk,*boskutu;

struct bag* yenikutu(){
	struct bag* yenikutu=(kutu*)malloc(sizeof(kutu));
	return yenikutu;
}

void basaEkleme(int veri){
	kutu *kayit=yenikutu();
	kayit->veri=veri;
	boskutu=ilk;
	kayit->sonraki=boskutu;
	ilk=kayit;
	
}
void Listele(){
	boskutu=ilk;
	if(boskutu==NULL)printf("bos");
	else{
	while(boskutu->sonraki!=NULL){
		printf("%d  => ",boskutu->veri);
		boskutu=boskutu->sonraki;
	}
	printf("%d\n",boskutu->veri);
	
}
}
int main(int argc, char *argv[]) {
  
 basaEkleme(50);
 basaEkleme(30);
 basaEkleme(40);
 Listele();
 
}
