#include<stdio.h>
#include<string.h>
struct sinhvien{
	int id;
	char name[50];
	int tuoi;
	char sdt[30];
};

void in( struct sinhvien PTIT[] , int size ){
	for(int i = 0 ; i < size ; i ++){
		printf("id: %d , name: %s , tuoi: %d , std: %s\n ", PTIT[i].id , PTIT[i].name , PTIT[i].tuoi , PTIT[i].sdt );
	}
}



int main(){
 struct sinhvien PTIT[50] = {
 	{1,"do hong ky", 18 , "0123456789",},
	{2,"Nguyen Xuan Bach",34 ,"987456321 "},
	{3,"Nguyen Quang An ", 31 , " 123456"},
	{4, "Pham Thi a", 22, "0223344556"},
    {5, "Hoang Van b", 23, "0334455667"}
 };
  	int size = 5;
in( PTIT ,size );
int vitri;
printf("hay nhap vi tri muons chen: ");
scanf("%d",&vitri);
	
	for(int i = size ;i > vitri ;i--){
		PTIT[i] = PTIT[i-1];
	}
	printf("id: ");
	scanf("%d",&PTIT[vitri].id);
	getchar();// giai phong bo nho  
	printf("ten: ");
	fgets(PTIT[vitri].name , sizeof(PTIT[vitri].name), stdin);
	PTIT[vitri].name[strcspn(PTIT[vitri].name, "\n")] = 0;
	printf("tuoi: ");
	scanf("%d",&PTIT[vitri].tuoi);
	getchar();// giai phong bo nho
	printf("sdt: ");
	fgets(PTIT[vitri].sdt , sizeof(PTIT[vitri].sdt), stdin);
	PTIT[vitri].sdt[strcspn(PTIT[vitri].sdt, "\n")] = 0;
	
	size++;
	

	
	in( PTIT , size );
	return 0;
}
















