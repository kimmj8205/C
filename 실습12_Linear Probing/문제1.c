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
 	printf("KEY�� VALUE�� �Է��Ͻÿ�.\n");
 	scanf("%d %d",&key, &value);

 	// -1�� �Է� �� ���, ����
 	if (key == -1) {
 		printf("�����մϴ�.\n");
 		break;
 	}
    
    int i=key;
    while(hash_table[key].empty==1) 
    { 
        
        key=hash(key+1); 

        if(key==i)
        { 
            printf("���̺��� ����á���ϴ�\n"); 
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