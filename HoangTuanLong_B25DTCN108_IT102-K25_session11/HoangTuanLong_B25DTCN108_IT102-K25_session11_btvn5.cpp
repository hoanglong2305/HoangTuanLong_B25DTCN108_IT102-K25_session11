#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Nhap so luong chuoi trong mang: ");
    scanf("%d", &n);
    getchar();	
    char list_chain[n][100]; 
    char chain_found[100];
    int search = 0;
    printf("Nhap cac chuoi:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] =  ", i);
        fgets(list_chain[i], sizeof(list_chain[i]), stdin);
        list_chain[i][strcspn(list_chain[i], "\n")] = '\0';
    }
    printf("Nhap chuoi can tim: ");
    fgets(chain_found, sizeof(chain_found), stdin);
    chain_found[strcspn(chain_found, "\n")] = '\0';
    for (int i = 0; i < n; i++) {
        if (strcmp(list_chain[i], chain_found) == 0) {
            printf("Chuoi '%s' duoc tim thay tai vi tri %d.\n", chain_found, i);
            search = 1;
            break;
        }
    }
    if (!search) {
        printf("Khong tim thay chuoi '%s' trong mang.\n", chain_found);
    }

    return 0;
}
