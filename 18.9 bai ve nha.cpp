	#include<stdio.h>
	#include<string.h>
	struct monan{
		int id;
		char name[50];
		int gia;
	};
	
	void in( struct monan menu[] , int size ){
		for(int i = 0 ; i < size ; i ++){
			printf("\nid: %d , name: %s , gia: %d ", menu[i].id, menu[i].name , menu[i].gia);
		}
	}
	
	
	void themphantu(struct monan menu[] , int size){
			menu[size].id = size + 1;
			printf("\nid: %d",size);
			printf("\nname: ");  
			//menu[size].name[strcspn(menu[size].name, "\n")] = 0;
			getchar();
	        fgets(menu[size].name, sizeof(menu[size].name), stdin);       
			printf("gia: ");
	        scanf("%d", &menu[size].gia);
		printf("\nsau khi them mon");
		for(int i = 0 ; i < size+1 ; i ++){
			printf("\nid: %d , name: %s , gia: %d ", menu[i].id, menu[i].name , menu[i].gia);
		}
	}
	
	void sua(struct monan menu[] , int size){
		int cansua;
		printf("nhap vi tri can sua: ");
		scanf("%d",&cansua);
		for(int i = 0 ;i < size ;i++){
		
			if(menu[i].id == cansua ){
			printf("\nnhap ten moi: ");
			getchar();  
	        fgets(menu[i].name,sizeof(menu[i].name), stdin);
			printf("nhap gia moi: ");
			scanf("%d",&menu[i].gia);		
		}
		break;
	}
		printf("\nsau khi sua");
		in(menu , size );
	}
	
	
	
	
	
	
	
	
	
		void xoamang (struct monan menu[] , int size){
		int vitri;
		printf("nhap vitri xoa: ");	
		scanf("%d",&vitri);
		vitri = vitri-1;
		for(int i = vitri ; i < size-1 ;i++){
				menu[i] = menu[i+1];
		}	
		size--;
		printf("\nsau khi xoa");	
		for(int i = 0 ; i < size ; i ++){
				printf("\nid: %d , name: %s , gia: %d ", menu[i].id, menu[i].name , menu[i].gia);
			}
		}
	
	void xep(struct monan menu[] , int size){
	int a; 
	printf("1. giam dan ");
	printf("\n2. tang dan ");	
	printf("\nlua chon cua ban: ");
	scanf("%d",&a);
		switch (a){
			case 1: 
			for(int i = 0 ; i < size ; i ++){
				for(int j = i+1 ; j < size ;j++){
					if ( menu[i].gia < menu[j].gia){
						struct monan tem = menu[i];
						menu[i] = menu[j];
						menu[j]= tem;
					}
				}
			}
			printf("giam dan\n");
	            in(menu, size);
			break;
			case 2 : 
			for(int i = 0 ; i < size ; i ++){
				for(int j = i+1 ; j < size ;j++){
					if ( menu[i].gia > menu[j].gia){
						struct monan tem = menu[i];
						menu[i] = menu[j];
						menu[j]= tem;
					}
				}
			}
			printf("tang dan\n");
	            in(menu, size);
		break;
		}
	}
	
	void timkiem(struct monan menu[] , int size){
		int a,b=0; 
		char tenmon[50];
		printf("moi ban nhap: ");
		getchar(); 
		fgets(tenmon , sizeof(tenmon), stdin);
		tenmon[strcspn(tenmon, "\n")] = 0;	
		printf("chon cach tim\n");
		scanf("%d",&a);
		
		switch(a){
			case 1:
			for(int i = 0 ; i < size ; i++){
				if(strcmp(menu[i].name, tenmon) == 0){
				b=1	;	
				}else{
				b=2;			
				}
				
				if(b==1){
					printf("co");
					break;
				}else if(b==2) {
					printf("k co");
					break;
				}
			}
			
			case 2: 
			
			break;
		}
	}
	
	
	int main(){
	 struct monan menu[50] = {
	    {1, "ga xao sau rieng", 3.0},
	    {2, "baba om mit", 20.0},
	    {3, "mong ga chien mam", 100.0},
	    {4, "dau tam hanh", 150.0},
	    {5, "hen xao phong tom", 40.0}
	};
		int size = 5;
		int chon;
	  do{
	  	printf("\n1. in cac mon an");
	  	printf("\n2. them mon an ");
	  	printf("\n3. sua mon an ");
	  	printf("\n4. xoa mon an ");
	  	printf("\n5. sap xep mon an ");
	  	printf("\n6. tim kiem phan tu ");
	  	printf("\n lua chon cua ban : ");
	  	scanf("%d", &chon );
	  
	  switch(chon){
	  	case 1: 
	  	in(menu , size );
	  	break;
	  	case 2:
	  	themphantu( menu ,size);	
	  	break;
	  	case 3: 
	  	sua(menu ,size);
	  	break;
	  	case 4:
	  	xoamang (menu,size)	;
	  	break;
	  	case 5:
	  	xep(menu ,size)	;
	  	break;
	  	case 6:
	  	timkiem(menu ,size);	
	  	break;
	  	case 7:
	    printf("thoat"); 
		default:
        printf("moi ban nhap lai ");
        break;
 }
	  }while(chon != 7);
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

