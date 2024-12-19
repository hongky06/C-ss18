#include<stdio.h>
#include<string.h> 
 struct hocsinh{
 	int id;
 	char name[50];
 	int tuoi;
 	char sdt[30];
 };

void xuat (struct hocsinh danhsach[50] , int size){
	for (int i = 0 ;i < size ;i++){
		printf("id: %d , name: %s , tuoi: %d , sdt: %s\n" , danhsach[i].id ,danhsach[i].name ,danhsach[i].tuoi , danhsach[i].sdt );
	}
}



int main(){
  	struct hocsinh danhsach[50]= {
  	{1,"do hong ky", 18 , "0123456789",},
	{2,"Nguyen Xuan Bach",34 ,"987456321 "},
	{3,"ahihi", 12 , " 123456"},
	{4, "Pham Thi D", 22, "0223344556"},
    {5, "Hoang Van E", 23, "0334455667"}
};
	  
	int size = 5;
	xuat (danhsach , size);
	
char xoaname[50];
printf("nhap ten muon xoa: ");	
fgets(xoaname , sizeof(xoaname), stdin);
xoaname[strcspn(xoaname, "\n")] = 0; 


for(int i = 0 ; i < size ;i++){
	if(strcmp(xoaname, danhsach[i].name) == 0){
	for (int j = i ; j < size-1;j++){
		danhsach[j] = danhsach[j+1];
	}	
		size--;
		break;
	}	
}



xuat (danhsach , size);
	
	return 0;
}
