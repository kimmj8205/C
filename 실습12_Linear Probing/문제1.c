#include<stdio.h>

typedef struct {
    int value;
    int empty;
}element;

int hash(int key)
{    
    return (key%10); 
}


int main() {
 int key, value;
 element hash_table[10];
    
 // initialize
 for(int i=0;i<10;i++) {
 hash_table[i].value=0;
 hash_table[i].empty=-1;
 }
    
 while(1) {
 	printf("KEY와 VALUE를 입력하시오.\n");
 	scanf("%d %d",&key, &value);

 	// -1을 입력 할 경우, 종료
 	if (key == -1) {
 		printf("종료합니다.\n");
 		break;
 	}
    
    int i=key;
    while(hash_table[key].empty==1) 
    { 
        
        key=hash(key+1); 

        if(key==i)
        { 
            printf("테이블이 가득찼습니다\n"); 
            return -1; 
        } 
    } 

    hash_table[key].empty=1; 
    hash_table[key].value=value;

 	for(int i=0;i<10;i++) {
 		printf("hashtable[%d] :%d\n",i,hash_table[i].value);
 	}
 }
}