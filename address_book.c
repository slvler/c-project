#include "stdio.h"
#include "stdlib.h"


typedef struct address_book{
    char first_name[50];
    char last_name[50];
    char phone[25];
    char address[75];
    int zip_code;

}ADDRESS_BOOK;


void record(ADDRESS_BOOK *addr, int N);
void list(ADDRESS_BOOK *addr, int N);

int main()
{
    ADDRESS_BOOK *address;
    int N;

    printf("enter to person: ");
    scanf("%d",&N);
    printf("\n");

    address = (ADDRESS_BOOK *)malloc(N*sizeof(ADDRESS_BOOK));
    if(address==NULL){
        printf("malloc error!");
        exit(0);
    }

    record(address, N);
    list(address, N);

    printf("%d", address);
    free(address);
    return 0;
}

void record(ADDRESS_BOOK *addr, int N){
    int i;
    for(i=0; i<N; i++){

        printf("first name: ");
        scanf("%s",&addr[i].first_name);
        printf("last name: ");
        scanf("%s",&addr[i].last_name);
        printf("phone : ");
        scanf("%s",&addr[i].phone);
        printf("address: ");
        scanf("%s",&addr[i].address);
        printf("zip code: ");
        scanf("%d",&addr[i].zip_code);
        printf("\n");

    }
}

void list(ADDRESS_BOOK *addr, int N){

    int i;
    for(i=0;i<N;i++){

        printf("%d. first name: %s\n",i+1,addr[i].first_name);
        printf("%d. last name: %s\n",i+1,addr[i].last_name);
        printf("%d. phone: %s\n",i+1,addr[i].phone);
        printf("%d. address: %s\n",i+1,addr[i].address);
        printf("%d. zip code: %d\n",i+1,addr[i].zip_code);
        printf("\n");

    }
}
