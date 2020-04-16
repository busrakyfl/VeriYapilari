#include <stdio.h>
#include <stdlib.h>

 struct bag{
	int veri;
	struct bag * sonraki;
};

struct bag *ilk=-1;

struct bag *boskutu=-1;

struct bag* yenikutu(){
	struct bag* yenikutu=(struct bag *)malloc(sizeof(struct bag));
	return yenikutu;
}

void basaEkleme(int veri){
    if(ilk==NULL){
    	ilk->veri=veri;
    	ilk->sonraki=NULL;
	}
	else{
	struct bag *kayit=yenikutu();
	kayit->veri=veri;
	boskutu=ilk;
	kayit->sonraki=boskutu;
	ilk=kayit;
		
	}
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
